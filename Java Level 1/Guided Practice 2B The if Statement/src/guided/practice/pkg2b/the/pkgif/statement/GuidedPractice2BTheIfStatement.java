/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 1/26/20
 * Description: Guided Practice 2B: The if Statement
 */
package guided.practice.pkg2b.the.pkgif.statement;
import java.util.Scanner;

public class GuidedPractice2BTheIfStatement 
{

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int score = 0;
        
        System.out.println("Enter your score ");
        score = in.nextInt();
        
        if(score > 100)
            System.out.println("You got an A+ ");
        else if(score >= 90)
            System.out.println("You got an A ");
        else if (score >= 80)        
            System.out.println("You got a B ");        
        else if(score >= 70)        
            System.out.println("You got a C");        
        else if(score >= 60)        
            System.out.println("You got a D");        
        else
            System.out.println("You got a F");
    }
    
}
