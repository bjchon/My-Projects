/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/15/20
 * Description: Assignment 11 Methods, Loops, and Decisions
*/
package assignment.pkg11.methods.loops.and.decisions;
import java.util.Scanner;

public class Assignment11MethodsLoopsAndDecisions 
{
        public int sumConsonants(char a, char b)
    {   
        int sum = 0, x = 0, y = 0, v = 0;
        
        if(Character.isUpperCase(a) && Character.isUpperCase(b))
        {   
            if(a>b)
            {
                x = b;
                y = a;
            }
            
            if(a<b)
            {
                x = a;
                y = b;
            }
            
            v = y-x;
            
            for (int z = 0; z <= v; z++)
            {
                if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
                    x++;
                
                else
                {
                    sum += x;
                    x++;
                }
            }
        }
        
        else
        {
            sum = -1;
            return sum;
        }        
        
        return sum;
    }
    public static void main(String[] args) 
    {
       Scanner in = new Scanner(System.in);
        Assignment11MethodsLoopsAndDecisions m = new Assignment11MethodsLoopsAndDecisions();
        String c;    
        char a, b;
        System.out.println("Enter two upper case characters ");
        c = in.nextLine();
        a = c.charAt(0);
        b = c.charAt(1);        
        System.out.println("The sum of the consonants is " + m.sumConsonants(a, b)); 
    }
    
}
