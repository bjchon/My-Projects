/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/19/20
 * Description: Assignment 3 Simple Math
 */
package assignment.pkg3.simple.math;

import java.util.Scanner;
import java.text.NumberFormat;

public class Assignment3SimpleMath 
{

    public static void main(String[] args) 
    {
                Scanner in =  new Scanner(System.in);
        double pen;
        double nic;
        double dim;
        double qua;
        double dollars;
        
        System.out.println("Enter pennies, nickels, dimes, and quarters");
        pen = in.nextDouble();
        pen *= .01;
        nic = in.nextDouble();
        nic *= .05;
        dim = in.nextDouble();
        dim *= .1;
        qua = in.nextDouble();
        qua *= .25;
        dollars = pen + nic + dim + qua;
        
        NumberFormat fmt = NumberFormat.getCurrencyInstance();
        String strDollars = fmt.format(dollars);
        System.out.println("You have " + strDollars); 
    }
    
}
