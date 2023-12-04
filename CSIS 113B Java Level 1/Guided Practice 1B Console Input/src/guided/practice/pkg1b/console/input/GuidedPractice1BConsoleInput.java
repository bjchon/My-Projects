/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/19/20
 * Description: Journal 1B
 */
package guided.practice.pkg1b.console.input;
import java.util.Scanner;

public class GuidedPractice1BConsoleInput 
{

    public static void main(String[] args) 
    {
       Scanner in = new Scanner(System.in);
        int num1, num2;
        
        System.out.println("Enter 2 values ");
        num1 = in.nextInt();
        num2 = in.nextInt();
        
        System.out.println("The sum is: " + (num1+ num2));
        System.out.println("The difference is: " + (num1 - num2));
        System.out.println("The product is: " + (num1 * num2)); 
        System.out.println("The quotient is: " + (num1 / num2));
    }
    
}
