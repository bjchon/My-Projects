/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/16/20
 * Description: Assignment 12 Method Overloading
*/
package assignment.pkg12.method.overloading;
import java.util.Scanner;

public class Assignment12MethodOverloading 
{
    public int sumNumber(int a)
    {
        return (a%10)+(a/10%10)+(a/100%10);
    }
    
    public int sumNumber(int a, int b)
    {
        Assignment12MethodOverloading mo = new Assignment12MethodOverloading();        
        return mo.sumNumber(a)+ mo.sumNumber(b);
    }
    public static void main(String[] args) 
    {
       Assignment12MethodOverloading mo = new Assignment12MethodOverloading(); 
       Scanner in = new Scanner(System.in);
       int num1, num2;
       System.out.println("Enter two three-digit numbers");
       num1 = in.nextInt();
       num2 = in.nextInt();
       System.out.println("The sum of the digits is " + mo.sumNumber(num1,num2));
    }
    
}
