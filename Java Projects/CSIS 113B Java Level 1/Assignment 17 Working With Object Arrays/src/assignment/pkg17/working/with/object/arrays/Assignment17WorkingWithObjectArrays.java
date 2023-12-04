/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/1/2020
 * Description: Assignment 17 Working with Object Arrays
*/
package assignment.pkg17.working.with.object.arrays;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Assignment17WorkingWithObjectArrays extends JFrame implements ActionListener , MouseListener
{
    Container content = this.getContentPane();
    JLabel[][] grid = new JLabel[3][3];
    char[][] game = new char[3][3];
    int numClicks;
    boolean isDone;
    boolean isXTurn;
    JButton restart = new JButton("Button");
    JPanel p = new JPanel();
    JLabel status = new JLabel("Welcome ");
    Font statusFont = new Font("helvetica", Font.BOLD, 12);
    Font gridFont = new Font("helvetica", Font.BOLD, 32);

    public Assignment17WorkingWithObjectArrays()
    {
        content.setLayout(new FlowLayout());

        content.add(status);
        status.setOpaque(true);
        status.setForeground(Color.BLUE);
        status.setBackground(Color.YELLOW);
        status.setFont(statusFont);
        p.setLayout(new GridLayout(3,3, 3,3));   
        p.setBackground(Color.BLACK);
        content.add(p, BorderLayout.CENTER);
        
        for(int row = 0; row < 2; row++)
        {
                for(int col = 0; col < 2; col++)
                {
                        JLabel j = new JLabel();
                        j = grid[row][col];
                        j.addMouseListener(this);
                        j.setOpaque(true);
                        j. setBackground(Color.WHITE);
                        
                        
                }          
        }
        
    }
    
        @Override
    public void actionPerformed(ActionEvent e) 
    {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void mouseClicked(MouseEvent e) 
    {
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
        Assignment17WorkingWithObjectArrays gui = new Assignment17WorkingWithObjectArrays();
    }
    
}
