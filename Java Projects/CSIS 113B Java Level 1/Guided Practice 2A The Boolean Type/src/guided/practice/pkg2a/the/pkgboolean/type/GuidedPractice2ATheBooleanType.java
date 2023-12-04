/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/26/20
 * Description: Guided Practice 2A: The Boolean Type
 */
package guided.practice.pkg2a.the.pkgboolean.type;
import java.util.Scanner;

public class GuidedPractice2ATheBooleanType 
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int x, y;
        
        System.out.println("Enter two values ");
        x = in.nextInt();
        y = in.nextInt();
        
        boolean truth = x < y;
        if(truth)
            System.out.println(x + " Is the smaller number ");
        else
            System.out.println(y+ " Is the smaller number ");
        
        truth = x > y;
        if(truth)
            System.out.println(y + " Is the smaller number ");
        else
            System.out.println(x+ " Is the smaller number ");
        
        truth = x != y;
        if(truth)
            System.out.println(x + " They are different numbers ");
        else
            System.out.println(y+ " They are the same number ");
    }
    
}
