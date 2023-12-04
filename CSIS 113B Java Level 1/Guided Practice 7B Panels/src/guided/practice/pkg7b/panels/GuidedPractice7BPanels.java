/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/26/20
 * Description: Guided Practice 7B Panels
*/

package guided.practice.pkg7b.panels;
import javax.swing.*;
import java.awt.*;

public class GuidedPractice7BPanels extends JFrame
{
    Container content = this.getContentPane();
    JTextField txt1 = new JTextField(15);
    JTextField txt2 = new JTextField(15);
    JTextField txt3 = new JTextField(15);
    JPanel pn1 = new JPanel();

     public GuidedPractice7BPanels()
    {      
        this.setVisible(true);
        this.setSize(300,300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("Using JPanels App");
        
        pn1.setLayout(new GridLayout(1,3));
        pn1.add(txt1);
        pn1.add(txt2);
        pn1.add(txt3);
        content.add(pn1, BorderLayout.NORTH);
    }
     
    public static void main(String[] args) 
    {
        GuidedPractice7BPanels gui = new GuidedPractice7BPanels();
    }
    
}
