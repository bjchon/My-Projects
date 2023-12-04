/*
 *Name: Bryant Chon
 *ID:0550190
 *Date:  2/9/20
 * Description: Guided Practice 3B Random Numbers
 */
package guided.practice.pkg3b.random.numbers;
import java.util.Random;

public class GuidedPractice3BRandomNumbers 
{

    public static void main(String[] args) 
    {
         Random rnd= new Random();
       char myRandom;        
       int min = 97;
       int max = 122;
       for(int i = 0; i < 10; i++)
        {
           myRandom = (char)(rnd.nextInt((max-min) + 1) + min);
           System.out.println(myRandom);
        }   
    }
    
}
