/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/1/2020
 * Description: Assignment 16 JButtons and TextFields
*/
package assignment.pkg16.jbuttons.and.textfields;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.text.NumberFormat;

public class Assignment16JButtonsAndTextFields extends JFrame implements ActionListener
{
    Container content = this.getContentPane();
    JTextField tfAmount = new JTextField(15);
    JTextField tfApr = new JTextField(15);
    JTextField tfYears = new JTextField(15);
    JLabel lblPayment = new JLabel(" ");
    JLabel lblTotCost = new JLabel(" ");
    JButton calc = new JButton("Calculate");
    
    public Assignment16JButtonsAndTextFields()
    {
        JLabel lblAmountBorrowed = new JLabel("Amount Borrowed ", JLabel.RIGHT);
        content.setLayout(new FlowLayout());
        content.add(lblAmountBorrowed);
        content.add(tfAmount);
        
        JLabel lblAprBorrowed = new JLabel("APR ", JLabel.RIGHT);
        content.setLayout(new FlowLayout());
        content.add(lblAprBorrowed);
        content.add(tfApr);
        
        JLabel lblTotCostBorrowed = new JLabel("Number of Years ", JLabel.RIGHT);
        content.setLayout(new FlowLayout());
        content.add(lblTotCostBorrowed);
        content.add(tfYears);
        
        content.add(calc);
        calc.addActionListener(this);
       
        content.add(lblPayment);
        content.add(lblTotCost);
        
        content.setLayout(new GridLayout(0,2, 5,5));
        this.setVisible(true);
        this.setSize(350,300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("How Much");
    }
    
    public void actionPerformed(ActionEvent ae) 
    {
        String lAmount, lAPR, lYears;
        lAmount = tfAmount.getText();
        lAPR = tfApr.getText();
        lYears = tfYears.getText();
        Double dblAmount = new Double(lAmount);
        Double dblAPR = new Double(lAPR);
        Double dblYears = new Double(lYears);
        double amount = dblAmount.doubleValue(); 
        double apr = dblAPR.doubleValue();
        double years = dblYears.doubleValue();
        double payment;
        apr = apr / 1200;
        payment = (amount * apr) / (1-(Math.pow(1/(1+apr), years *12)));
        NumberFormat fmt = NumberFormat.getCurrencyInstance();
        
        lblPayment.setText("Monthly Payment " + fmt.format(payment));
        lblTotCost.setText("Total Cost " + fmt.format(payment * 12* years));
    }
    
    public static void main(String[] args) 
    {
       Assignment16JButtonsAndTextFields gui = new Assignment16JButtonsAndTextFields(); 
    }
    
}
