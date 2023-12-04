/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/26/20
 * Description: Assignment 6 The Switch Statement
*/
package assignment.pkg6.the.pkgswitch.statement;
import java.util.Scanner;
import java.text.NumberFormat;

public class Assignment6TheSwitchStatement 
{

    public static void main(String[] args) 
    {
             Scanner in = new Scanner(System.in);
        NumberFormat fmt = NumberFormat.getCurrencyInstance();
        int choice;        
        
        System.out.println("How many widgets do you want to purchase? ");
        choice = in.nextInt();
        
        switch (choice)
        {
            case 1:
                System.out.println("Total Cost of your idget is  " + fmt.format(choice*5.38));
                break;
            case 2:
                System.out.println("Total Cost of your idget is  " + fmt.format(choice*4.89));
                break;
            case 3:
                System.out.println("Total Cost of your idget is  " + fmt.format(choice*4.66));
                break;
            case 4:
                System.out.println("Total Cost of your idget is  " + fmt.format(choice*4.23));      
                break;
            default:
                System.out.println("Limit 4 ");
        }   
    }
    
}
