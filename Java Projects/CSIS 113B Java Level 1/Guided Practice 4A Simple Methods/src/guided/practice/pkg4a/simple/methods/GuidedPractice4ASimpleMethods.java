/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/12/20
 * Description: Guided Practice 4A Simple Methods
*/
package guided.practice.pkg4a.simple.methods;
import java.util.Scanner;

public class GuidedPractice4ASimpleMethods 
{
    public void printName()
    {
        System.out.println("Hello From Bryant");
    }
    public void SayHello()
    {
        this.printName();
    }

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int num;        
        System.out.println("How many times would you like to print my name?");
        num = in.nextInt();
        GuidedPractice4ASimpleMethods c = new GuidedPractice4ASimpleMethods();
        for(int i = 0; i <num; i++)
        {
            c.SayHello();
        }
    }
    
}
