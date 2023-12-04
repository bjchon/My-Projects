/*
 *Name: Bryant Chon
 *ID:0550190
 *Date:  2/9/20
 * Description: Assignment 8 A simple guessing game
 */
package assignment.pkg8.a.simple.guessing.game;
import java.util.Scanner;
import java.util.Random;
public class Assignment8ASimpleGuessingGame 
{

    public static void main(String[] args) 
    {
       Scanner in = new Scanner(System.in);
        Random rnd = new Random();
        
        System.out.println("I am thinking of a number between 1 and 10");
        System.out.println("Can you guess it? ");
        int count = 1;
        int guess = in.nextInt();
        if(guess>10)
            {
                System.out.println("Must be a number between 1 and 10");               
                System.out.println("Try Again");
                guess = in.nextInt();
            }
        if(guess<1)
            {
              System.out.println("Must be a number between 1 and 10");
              System.out.println("Try Again");
              guess = in.nextInt();
            }
        int num = rnd.nextInt(10) + 1;
        int point = 10;

        while(guess != num)
            {

                if(guess>10)
                {
                    System.out.println("Must be a number between 1 and 10");               
                    System.out.println("Try Again");
                    guess = in.nextInt();
                }
                
                if(guess<1)
                {
                    System.out.println("Must be a number between 1 and 10");
                    System.out.println("Try Again");
                    guess = in.nextInt();
                }
                
                System.out.println("Sorry, wrong guess");
                System.out.println("Try Again");
                guess = in.nextInt();
                count++;
                point -=2;
            }  

        System.out.println("It took you " + count + " guesses to guess: " + num);
        System.out.println("You have " + point + " points");
    }
    
}
