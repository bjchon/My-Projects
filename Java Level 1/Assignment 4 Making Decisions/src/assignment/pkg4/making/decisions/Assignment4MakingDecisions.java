/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/26/20
 * Description: Assignment 4 Making Decisions
 */
package assignment.pkg4.making.decisions;
import java.util.Scanner;
import java.text.NumberFormat;

public class Assignment4MakingDecisions 
{

    public static void main(String[] args) 
    {
         Scanner in = new Scanner(System.in);
       NumberFormat fmt = NumberFormat.getCurrencyInstance();
       
       double miles = 0;
       double money = 0;
       double x = 0;
       double y= 0;
       
       System.out.println("Enter the number of miles driven");
       miles = in.nextDouble();
      
       if (miles <= 100)
           money = miles * .25;
       else
       { 
           y = miles - 100;
           x = y * .15;
           money = x + 25;
       }
       
       System.out.println("You are owed " + fmt.format(money));
    }
    
}
