/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/12/20
 * Description: Guided Practice 4B Value Producing Methods
*/
package guided.practice.pkg4b.value.producing.methods;
import java.util.Scanner;
public class GuidedPractice4BValueProducingMethods 
{
    Scanner in = new Scanner(System.in);
    
    public int getValue()
    {
        System.out.println("Enter an even number: ");
        int val;
        val = in.nextInt();
        return val;
    }
    
    public int getEvenValue()
    {
        int r = this.getValue();
        while(r % 2 != 0)     
        { 
            System.out.print("Your number is odd. ");  
            r = this.getValue(); 
        }        
        if(r%2==0)
            {
                System.out.print("Your number is even and ");
                return r;
            }           
        return r;
    }
    
    public static void main(String[] args) 
    {
        GuidedPractice4BValueProducingMethods c = new GuidedPractice4BValueProducingMethods();
        int x = c.getEvenValue();
        System.out.println("the value you entered is " + x);
    }
    
}
