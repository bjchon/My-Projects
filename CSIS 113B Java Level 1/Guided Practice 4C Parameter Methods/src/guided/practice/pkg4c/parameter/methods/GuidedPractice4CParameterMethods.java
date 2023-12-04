/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/12/20
 * Description: Guided Practice 4C Parameter Methods
*/
package guided.practice.pkg4c.parameter.methods;
import java.util.Scanner;

public class GuidedPractice4CParameterMethods 
{
    Scanner in = new Scanner(System.in);
       
    public int getValue()
    {
        System.out.println("Enter a number: ");
        int val;
        val = in.nextInt();
        return val;
    }

    public int cubeIt(int num)
    {
        return num*num*num;
    }
    
    public int sumIt(int num1, int num2)
    {
        return num1+num2;
    }
    public static void main(String[] args) 
    {
        GuidedPractice4CParameterMethods g = new GuidedPractice4CParameterMethods();
        int x = g.getValue();
        int y = g.getValue();
        int sum = g.sumIt(x, y);
        System.out.println("The values you entered are " + x +" and " + y);
        int cube = g.cubeIt(sum);        
        System.out.println("The cube of the sum of your values is " + cube);     
    }
    
}
