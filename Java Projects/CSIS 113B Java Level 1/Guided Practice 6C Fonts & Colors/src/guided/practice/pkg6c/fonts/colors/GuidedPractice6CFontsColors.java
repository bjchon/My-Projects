/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/26/20
 * Description: Guided Practice 6C Fonts & Colors
*/

package guided.practice.pkg6c.fonts.colors;
import javax.swing.*;
import java.awt.*;

public class GuidedPractice6CFontsColors extends JFrame
{
        Container content = this.getContentPane();
    Font fnt = new Font("times new roman", Font.ITALIC, 50);
    Color foreClr = new Color(1.0F, .49F , .25F);
    
    
    JLabel lb1 = new JLabel("Bryant");
    JLabel lb2 = new JLabel("Chon");
    JLabel lb3= new JLabel("February 26, 2020");
    
    public GuidedPractice6CFontsColors()
    {
        content.setLayout(new FlowLayout());
        content.add(lb1);
        lb1.setFont(fnt);
        lb1.setForeground(Color.WHITE);
        lb1.setBackground(foreClr);
        lb1.setOpaque(true);
        
        content.setLayout(new FlowLayout());
        content.add(lb2);
        lb2.setFont(fnt);
        lb2.setForeground(Color.BLUE);
        lb2.setBackground(Color.WHITE);
        lb2.setOpaque(true);
        
        content.setLayout(new FlowLayout());
        content.add(lb3);
        lb3.setFont(fnt);
        lb3.setForeground(Color.GREEN);
        lb3.setBackground(foreClr);
        lb3.setOpaque(true);
        
        content.setLayout(new GridLayout(3,1));
        
        this.setVisible(true);
        this.setSize(300,400);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("GUI App");
    }
    public static void main(String[] args) 
    {
         GuidedPractice6CFontsColors gui = new GuidedPractice6CFontsColors();
    }
    
}
