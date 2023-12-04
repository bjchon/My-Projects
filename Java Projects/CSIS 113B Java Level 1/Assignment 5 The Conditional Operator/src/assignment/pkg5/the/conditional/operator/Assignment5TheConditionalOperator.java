/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/26/20
 * Description: Assignment 5 The Conditional Operator
*/
package assignment.pkg5.the.conditional.operator;

import java.util.Scanner;
import java.text.NumberFormat;

public class Assignment5TheConditionalOperator 
{

    public static void main(String[] args) 
    {
       Scanner in = new Scanner(System.in);
       NumberFormat fmt = NumberFormat.getCurrencyInstance();
       
       double miles = 0;
       double co = 0;
       double money = 0;
       double x = 0;
       
       System.out.println("Enter the number of miles driven");
       miles = in.nextDouble();
       x = (miles - 100) * .15;
       money = x + 25;
     
      
       co = (miles <= 100) ? miles * .25 : money;
       System.out.println("You are owed " + fmt.format(co));
    }
    
}
