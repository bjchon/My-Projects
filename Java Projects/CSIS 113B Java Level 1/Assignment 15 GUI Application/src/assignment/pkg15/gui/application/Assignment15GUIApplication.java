/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/1/20
 * Description: Assignment 15 GUI Application
*/
package assignment.pkg15.gui.application;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Assignment15GUIApplication extends JFrame
{
    Container content = this.getContentPane();
    Font nameFont = new Font("times new roman", Font.ITALIC, 50);
    Font dateFont = new Font("arial", Font.BOLD, 25);
    Color nameColor = new Color(1, 5, 20);
    Color dateColor = new Color(1.0F, .49F , .25F);
    JLabel lblFName = new JLabel("Bryant ");
    JLabel lblLName = new JLabel("Chon ");
    JLabel lblDate = new JLabel("3/1/2020 ");
    
    public Assignment15GUIApplication()
    {
        content.setLayout(new FlowLayout());
        content.add(lblFName);
        lblFName.setFont(nameFont);
        lblFName.setForeground(nameColor);
        lblFName.setOpaque(true);
        
        content.setLayout(new FlowLayout());
        content.add(lblLName);
        lblLName.setFont(nameFont);
        lblLName.setForeground(nameColor);
        lblLName.setOpaque(true);
        
        content.setLayout(new FlowLayout());
        content.add(lblDate);
        lblDate.setFont(dateFont);
        lblDate.setForeground(dateColor);
        lblDate.setOpaque(true);
        
        content.setLayout(new GridLayout(3,1));
        
        this.setVisible(true);
        this.setSize(300,300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("First GUI App");           
    }

    public static void main(String[] args) 
    {
       Assignment15GUIApplication gui = new Assignment15GUIApplication();
    }
    
}
