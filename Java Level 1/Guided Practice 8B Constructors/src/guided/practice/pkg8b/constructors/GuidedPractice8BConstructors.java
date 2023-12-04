/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/4/2020
 * Description: Guided Practice 8B Constructors
*/

package guided.practice.pkg8b.constructors;

public class GuidedPractice8BConstructors 
{
    public static void main(String[] args) 
    {
       Rectangle r1 = new Rectangle(4,3);
        Rectangle r2 = new Rectangle(6,5);
        
        System.out.println("The are of r1 is " + r1.area());
        System.out.println("The are of r2 is " + r2.area());
        
        Box b1 = new Box(2, 3, 4);
        Box b2 = new Box(1, 2, 3);
        
        System.out.println("The are of b1 is " + b1.areaBox());
        System.out.println("The are of b2 is " + b2.areaBox());    
    }
    
}
