/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/4/2020
 * Description: Guided Practice 8C Object Arrays
*/
package guided.practice.pkg8c.object.arrays;
import java.util.Random;

public class GuidedPractice8CObjectArrays 
{
    public static void main(String[] args) 
    {
       Integer[] num = new Integer[10];
        Random rnd= new Random();
        
        for(int i = 0; i < num.length; i++)
        {
            num[i] = rnd.nextInt(10);
        }
        
        for(int i = 0; i < num.length; i++)
        {            
            System.out.println(num[i].toString());
        }
    }
    
}
