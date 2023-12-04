/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/26/20
 * Description: Guided Practice 6B The JLabel Component
*/
package guided.practice.pkg6b.the.jlabel.component;
import javax.swing.*;
import java.awt.*;

public class GuidedPractice6BTheJLabelComponent extends JFrame
{
    Container content = this.getContentPane();
    
    public GuidedPractice6BTheJLabelComponent()
    {
        content.setLayout(new GridLayout(3,1));
        content.add(new JLabel("Bryant"));
        content.add(new JLabel("Chon"));
        content.add(new JLabel("February 26, 2020"));
        
        this.setVisible(true);
        this.setSize(300,400);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("GUI App");
    }
    
    public static void main(String[] args) 
    {
        GuidedPractice6BTheJLabelComponent gui = new GuidedPractice6BTheJLabelComponent();
    }
    
}
