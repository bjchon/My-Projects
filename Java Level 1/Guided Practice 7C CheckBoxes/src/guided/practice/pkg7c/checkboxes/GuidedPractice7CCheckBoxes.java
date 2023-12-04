/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/26/20
 * Description: Guided Practice 7C CheckBoxes
*/

package guided.practice.pkg7c.checkboxes;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class GuidedPractice7CCheckBoxes extends JFrame implements ItemListener
{
    Container content = this.getContentPane();
    JCheckBox chkApples = new JCheckBox("Apples");
    JCheckBox chkOranges = new JCheckBox("Oranges");
    JCheckBox chkGrapes = new JCheckBox("Grapes");
    JCheckBox chkBananas = new JCheckBox("Bananas");
    JLabel lb1Output = new JLabel(" ");
    JPanel pn1 = new JPanel();
    
        public GuidedPractice7CCheckBoxes()
    {
        this.setVisible(true);
        this.setSize(300,300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("Using JCheckBoxes App");
        pn1.setLayout(new GridLayout(4,1,5,5));
        pn1.add(chkApples);
        pn1.add(chkOranges);
        pn1.add(chkGrapes);
        pn1.add(chkBananas);
        content.add(pn1, BorderLayout.SOUTH);
        content.add(lb1Output, BorderLayout.NORTH);
        chkApples.addItemListener(this);
        chkOranges.addItemListener(this);
        chkGrapes.addItemListener(this);
        chkBananas.addItemListener(this);
    }
    
    @Override
    public void itemStateChanged(ItemEvent e) 
    {
        JCheckBox chk = (JCheckBox) e.getSource();
        if(chk == chkApples)
        {
            if(chk.isSelected())
                lb1Output.setText("Apples Selected");
        }
        if(chk == chkOranges)
        {
            if(chk.isSelected())
                lb1Output.setText("Oranges Selected");
        }
        if(chk == chkGrapes)
        {
            if(chk.isSelected())
                lb1Output.setText("Grapes Selected");
        }
        if(chk == chkBananas)
        {
            if(chk.isSelected())
                lb1Output.setText("Bananas Selected");
        }
    }
    
    public static void main(String[] args) 
    {
        GuidedPractice7CCheckBoxes gui = new GuidedPractice7CCheckBoxes();
    }
    
}
