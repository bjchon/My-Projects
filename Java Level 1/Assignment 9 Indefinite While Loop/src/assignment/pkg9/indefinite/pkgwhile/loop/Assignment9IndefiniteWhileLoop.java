/*
 *Name: Bryant Chon
 *ID:0550190
 *Date:  2/9/20
 * Description: Assignment 8 A simple guessing game
 */
package assignment.pkg9.indefinite.pkgwhile.loop;
import java.util.Scanner;

public class Assignment9IndefiniteWhileLoop 
{

    public static void main(String[] args) 
    {
       Scanner in = new Scanner(System.in);
        double num;
        String str, answer;
        answer = "y";
        
        
        while(answer != "X")
        {
        System.out.println("This calculator requires you to enter a function and a number ");
        System.out.println("The functions are as follows: ");
        System.out.println("S - sine ");
        System.out.println("C - cosine ");
        System.out.println("T - tangent ");
        System.out.println("R - square root ");
        System.out.println("N - natural log ");
        System.out.println("X - Exit Program ");
        }
        
        System.out.println("Please enter a function then a value ");
        str = in.nextLine();
        char operation = str.charAt(0);
    }
    
}
