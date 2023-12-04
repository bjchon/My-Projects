/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/19/20
 * Description: Journal 1C
 */
package guided.practice.pkg1c.math.operators;
import java.util.Scanner;

public class GuidedPractice1CMathOperators 
{

    public static void main(String[] args) 
    {
        Scanner in =  new Scanner(System.in);
        int  nickels;
        
        System.out.println("Enter Your Nickels");
        nickels = in.nextInt();
        
        int dollars = nickels / 20;
        double change = ((nickels % 20)*5);
        double change1 = change/100;
        double total = dollars + change1;
        
        System.out.println("You have $" + total);
    }
    
}
