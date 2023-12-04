/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/19/20
 * Description: Assignment 13 Arrays As Arguments
*/
package assignment.pkg13.arrays.as.arguments;
import java.util.Random;

public class Assignment13ArraysAsArguments 
{
    public int[] createArray(int size)
    {
        Random r = new Random();
        int[] array = new int[size];
        
        for(int i = 0; i<size; i++)
            array[i]=r.nextInt(100)+1;
        
        return array;
    }
    
    public void printArray(int[] array)
    {
        for(int i = 0; i<array.length; i++)
            System.out.println(array[i]);
    }
    
    public int countEvens(int[] array)
    {
        int count = 0;
        
        for(int i = 0; i < array.length; i++)
        {
            if(array[i]%2==0)
                count++;
        }
        
        return count;
    }
    
    public static void main(String[] args) 
    {
        Assignment13ArraysAsArguments a = new Assignment13ArraysAsArguments();        
        int [] array = a.createArray(25);
        
        a.printArray(array);        
        System.out.println("There are " + a.countEvens(array) + " even numbers in the array");
    }
    
}
