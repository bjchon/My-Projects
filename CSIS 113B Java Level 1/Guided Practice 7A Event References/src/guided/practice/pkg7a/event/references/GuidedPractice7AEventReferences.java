/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/26/20
 * Description: Guided Practice 7A Event References
*/
package guided.practice.pkg7a.event.references;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class GuidedPractice7AEventReferences extends JFrame implements ActionListener
{
    Container content = this.getContentPane();
    JButton btnGreen = new JButton("Green");
    JButton btnBlue = new JButton("Blue");
    JButton btnRed = new JButton("Red");

    
    public GuidedPractice7AEventReferences()
    {
        content.setLayout(new FlowLayout());
        this.setVisible(true);
        this.setSize(300,300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("First GUI App");
        content.add(btnBlue, BorderLayout.SOUTH);
        content.add(btnGreen, BorderLayout.SOUTH);
        content.add(btnRed, BorderLayout.SOUTH);
        btnBlue.addActionListener(this);
        btnGreen.addActionListener(this);
        btnRed.addActionListener(this);
    }
    
    @Override
    public void actionPerformed(ActionEvent ae) 
    {
        JButton btn = (JButton) ae.getSource();
        if(btn == btnBlue)
            content.setBackground(Color.BLUE);
        if(btn == btnGreen)
            content.setBackground(Color.GREEN);
        if(btn == btnRed)
            content.setBackground(Color.RED);        
    }
    public static void main(String[] args) 
    {
        GuidedPractice7AEventReferences gui = new GuidedPractice7AEventReferences();
    }
    
}
