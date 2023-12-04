/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/26/20
 * Description: Guided Practice 2C The Switch Statement
 */

package guided.practice.pkg2c.the.pkgswitch.statement;
import java.util.Scanner;

public class GuidedPractice2CTheSwitchStatement 
{
    public static void main(String[] args) 
    {
              Scanner in = new Scanner(System.in);
        int choice;
        double x;
        double y;
        
        System.out.println("Enter 2 Numbers ");
        x = in.nextDouble();
        y = in.nextDouble();
        
        System.out.println("Enter an operation ");
        System.out.println("1. Add ");
        System.out.println("2. Subtract ");
        System.out.println("3. Multiply ");
        System.out.println("4. Divide ");

        choice = in.nextInt();
        
        switch (choice)
        {
            case 1:
                System.out.println("The sum is " + (x + y));
                break;
            case 2:
                System.out.println("The difference is " + (x - y));
                break;
            case 3:
                System.out.println("The product is " + (x * y));
                break;
            case 4:
                System.out.println("The quotient " + (x / y));      
                break;
            default:
                System.out.println("Invalid Operation ");
        }  
    }
    
}
