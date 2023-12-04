/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/26/20
 * Description: Guided Practice 6A GUI Applications
*/

package guided.practice.pkg6a.gui.applications;
import javax.swing.*;
import java.awt.*;

public class GuidedPractice6AGUIApplications extends JFrame
{
    public GuidedPractice6AGUIApplications(String title)
    {
        this.setVisible(true);
        this.setSize(300,400);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle(title);
    }
    
    public static void main(String[] args) 
    {
       GuidedPractice6AGUIApplications gui = new GuidedPractice6AGUIApplications("GUI App");
    }
    
}
