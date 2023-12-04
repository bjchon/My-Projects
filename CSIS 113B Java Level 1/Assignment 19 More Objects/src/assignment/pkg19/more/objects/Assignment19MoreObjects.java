/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/6/2020
 * Description: Assignment 19 More Objects
*/

package assignment.pkg19.more.objects;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;

public class Assignment19MoreObjects extends JFrame implements ActionListener, MouseListener
{
    Container content = this.getContentPane();
    JLabel[] lblBoard = new JLabel[16];
    int[] nums = {1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8};
    int firstChoice = -1;
    int tries = 0; 
    JLabel lblFirst = new JLabel("");
    JButton btnGame = new JButton("New Game");
    JLabel lblTries = new JLabel("0");
    Font boardFont = new Font("helvetica", Font.BOLD, 24);
    JPanel pnlBoard = new JPanel();
    JPanel pnlControls = new JPanel();
    
    public Assignment19MoreObjects()
    { 
        createLabels();    
        shuffle();
        pnlControls.setLayout(new FlowLayout());
        pnlControls.add(btnGame);
        btnGame.addActionListener(this);        
        JLabel nt = new JLabel("Number of Tries ", JLabel.RIGHT);
        pnlControls.add(nt);
        pnlControls.add(lblTries);
        content.add(pnlControls, BorderLayout.SOUTH);
        content.add(pnlBoard, BorderLayout.CENTER);
        this.setVisible(true);
        this.setSize(350,300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("Concentration Game");
    }
    
    public void createLabels()
    {
        pnlBoard.setLayout(new GridLayout(4,4, 5,5));
        for(int i = 0; i < 16; i++)
        {
            lblBoard[i] = new JLabel("", JLabel.CENTER);
            lblBoard[i].setOpaque(true);
            lblBoard[i].setBackground(Color.red);
            lblBoard[i].setForeground(Color.white);
            lblBoard[i].setFont(boardFont);
            lblBoard[i].addMouseListener(this);
            lblBoard[i].setName("" + i);
            pnlBoard.add(lblBoard[i]);            
        }
    }
    
    public void shuffle()
    {
        int num1, num2, temp;
        Random r = new Random();
        for(int i = 0; i <500; i++)
        {
            num1 = r.nextInt(nums.length);
            num2 = r.nextInt(nums.length);
            temp = nums[num1];
            nums[num1] = nums[num2];
            nums[num2] = temp;
        }
        
    }
    
    public void actionPerformed(ActionEvent e) 
    {
       shuffle();
       firstChoice = -1;
       for(int i = 0; i <lblBoard.length; i++)
       {
           lblBoard[i].setText("");           
       }
       tries = 0;
       lblTries.setText(Integer.toString(tries));
    }

    public void mouseClicked(MouseEvent e) 
    {
        JLabel l = (JLabel)e.getSource();
        int theNumber = Integer.parseInt(l.getName());
        
        if(firstChoice == -1)
        {
            l.setText(Integer.toString(nums[theNumber]));
            lblFirst = l;
            firstChoice = theNumber;
        }
        
        else if(nums[theNumber] != nums[firstChoice])
        {
            l.setText(Integer.toString(nums[theNumber]));
            pnlBoard.paintImmediately(0,0,pnlBoard.getWidth(),pnlBoard.getHeight());
        
            try
            {
                Thread.sleep(250);
            }
            
            catch(InterruptedException x)
            {
            
            }
            
            lblFirst.setText("");
            l.setText("");
            lblFirst = new JLabel((String)null);
            firstChoice = -1;
            tries++;
        }
        
        else
        {
            l.setText(Integer.toString(nums[theNumber]));
            firstChoice = -1;
            tries++;
        }
        lblTries.setText(Integer.toString(tries));
    }

    @Override
    public void mousePressed(MouseEvent e) 
    {
    }

    @Override
    public void mouseReleased(MouseEvent e) 
    {
    }

    @Override
    public void mouseEntered(MouseEvent e) 
    {
    }

    @Override
    public void mouseExited(MouseEvent e) 
    {
    }
    public static void main(String[] args) 
    {
        Assignment19MoreObjects gui = new Assignment19MoreObjects();
    }
    
}
