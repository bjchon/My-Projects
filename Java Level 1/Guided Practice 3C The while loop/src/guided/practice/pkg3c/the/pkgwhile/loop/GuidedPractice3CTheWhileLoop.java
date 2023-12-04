/*
 *Name: Bryant Chon
 *ID:0550190
 *Date:  2/9/20
 * Description: Guided Practice 3C The While Loop
 */
package guided.practice.pkg3c.the.pkgwhile.loop;
import java.util.Scanner;
import java.util.Random;
public class GuidedPractice3CTheWhileLoop 
{

    public static void main(String[] args) 
    {
      Scanner in = new Scanner(System.in);
        Random rnd = new Random();
        
        System.out.println("Would you like to play (y/n)?");
        String answer = in.nextLine();
        
        while(answer.equals("y"))
        {
            System.out.println("Guess a number between 1 and 10");
            int count = 1;
            int guess = in.nextInt();
            int num = rnd.nextInt(10) + 1;

            while(guess != num)
            {
                System.out.println("Guess a number between 1 and 10");
                guess = in.nextInt();
                count++;
            }  
            
            System.out.println("It took " + count + " guesses to guess correctly");
            System.out.println("Would you like to play again (y/n)?");
            answer = in.nextLine();
        }
    }
    
}
