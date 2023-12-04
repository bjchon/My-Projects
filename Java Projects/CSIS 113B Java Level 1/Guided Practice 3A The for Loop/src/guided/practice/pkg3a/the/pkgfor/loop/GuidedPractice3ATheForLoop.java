/*
 *Name: Bryant Chon
 *ID:0550190
 *Date:  2/9/20
 * Description: Guided Practice 3A: The for Loop
 */
package guided.practice.pkg3a.the.pkgfor.loop;
import java.util.Scanner;
public class GuidedPractice3ATheForLoop 
{

    public static void main(String[] args) 
    {
        for(int row = 0; row < 1; row++)
        {
            for(int col = 0; col < 10; col++)
            {
                System.out.print(row + col + "\t");
            }            
            System.out.print("\n"); 
   
        }
        for(int row = 1; row < 10; row++)
        {
            System.out.print(row + "\t");
            for(int col = 1; col < 10; col++)
            {
                System.out.print(row * col + "\t");
            }            
            System.out.print("\n"); 
   
        }
    }
    
}
