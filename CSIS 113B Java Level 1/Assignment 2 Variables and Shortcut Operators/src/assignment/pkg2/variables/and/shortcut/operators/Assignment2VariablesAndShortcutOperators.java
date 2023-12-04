/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/19/20
 * Description: Assignment 2 Variables and Shortcut Operators
 */
package assignment.pkg2.variables.and.shortcut.operators;

import java.util.Scanner;

public class Assignment2VariablesAndShortcutOperators 
{

    public static void main(String[] args) 
    {
        Scanner in =  new Scanner(System.in);
        double  myDbl;
        double anotherDbl;
        int myInt;
        
        System.out.println("Enter two doubles and an int");
        myDbl = in.nextDouble();
        anotherDbl = in.nextDouble();
        myInt = in.nextInt();
        
        myDbl++;
        anotherDbl-=2;
        myInt--;
        
        System.out.println("Here are your numbers modified" + "\n" + myDbl + 
                "\n" + anotherDbl + "\n" + myInt);              
    }    
}
