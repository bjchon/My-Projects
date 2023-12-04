/*
 *Name: Bryant Chon
 *ID:0550190
 *Date:  2/9/20
 * Description: Assignment 7 the for loop
 */
package assignment.pkg7.the.pkgfor.loop;
import java.util.Scanner;

public class Assignment7TheForLoop 
{

    public static void main(String[] args) 
    {
        Scanner in =  new Scanner(System.in);
       int num; 
       System.out.print("Please enter a number" + "\n");
       num = in.nextInt();
       for(int pair = 1; pair <=num; pair++)
       {
           for(int pair1 =0; pair + pair1 <= num; pair1++)
           {
               System.out.print(pair + ",");
               System.out.print(pair + pair1 + "\n");
           }
       }
    }
    
}
