/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/4/2020
 * Description: Guided Practice 8A Creating Classes
*/

package guided.practice.pkg8a.creating.classes;

public class GuidedPractice8ACreatingClasses 
{

public static void main(String[] args) 
    {
        Rectangle r1 = new Rectangle();
        Rectangle r2 = new Rectangle();
        
        r1.setRectangle(4,3);
        r2.setRectangle(6, 5);
        
        System.out.println("The are of r1 is " + r1.area());
        System.out.println("The are of r2 is " + r2.area());
        
        Box b1 = new Box();
        Box b2 = new Box();
        
        b1.setBox(2, 3, 4);
        b2.setBox(1, 2, 3);
        
        System.out.println("The are of b1 is " + b1.areaBox());
        System.out.println("The are of b2 is " + b2.areaBox()); 
    }
    
}
