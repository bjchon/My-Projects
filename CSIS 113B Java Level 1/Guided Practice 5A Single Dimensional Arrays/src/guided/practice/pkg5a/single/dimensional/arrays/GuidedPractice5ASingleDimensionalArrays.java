/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/19/20
 * Description: Guided Practice 5A Single Dimensional Arrays
*/
package guided.practice.pkg5a.single.dimensional.arrays;

import javax.swing.*;
import java.util.Random;

public class GuidedPractice5ASingleDimensionalArrays 
{
    public int[] createArray(int size)
    {
        int[] array = new int[size];
        Random r = new Random();
        
        for(int i = 0; i < array.length; i++)
            array[i] = r.nextInt(101);
        
        return array;
    }
    
    public void printArray(int[] array)
    {
        for(int i = 0; i < array.length; i++)
            System.out.println(array[i]);
    }
    
    public int div10(int[] array)
    {
        int count = 0;
        
        for(int i = 0; i < array.length; i++)
            {
                if(array[i]%10 == 0)        
                count++;
            }
        
        return count;
                
    }

    public static void main(String[] args) 
    {
        GuidedPractice5ASingleDimensionalArrays g = new GuidedPractice5ASingleDimensionalArrays();
        int[] myArray = g.createArray(10);

        g.printArray(myArray);
        System.out.println("There are " + g.div10(myArray) + " numbers evenly divisible by 10");
    }
    
}
