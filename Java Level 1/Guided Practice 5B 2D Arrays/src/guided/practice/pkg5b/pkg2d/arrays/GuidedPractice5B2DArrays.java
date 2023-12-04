/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/19/20
 * Description: Guided Practice 5B Two Dimensional Arrays
*/
package guided.practice.pkg5b.pkg2d.arrays;
import javax.swing.*;
import java.util.Random;
import java.util.Scanner;

public class GuidedPractice5B2DArrays 
{
    public int[][] createArray(int rSize, int cSize)
    {
        Random r = new Random();
        int[][] array = new int[rSize][cSize];
        
        for(int row = 0; row < array.length; row++)
            {
                for(int col = 0; col < array[0].length; col++)
                    {
                        array[row][col] = r.nextInt(26);
                    }
          
            }
        
        return array;
    }
    
    public void print2DArray(int[][] array)
    {
        for(int row = 0; row < array.length; row++)
        {
          for(int col = 0; col < array[0].length; col++)
          {
              System.out.print(array[row][col]+"\t");
          }
          System.out.println("\n");
        }
    }
    
    public int countInstance(int[][] array, int search)
    {
        int count = 0;
        for(int row = 0; row < array.length; row++)
        {
          for(int col = 0; col < array[0].length; col++)
          {
              if(array[row][col] == search)
              {
                  count++;
                  System.out.println("Your number occurs at row " + (row + 1) + " and column " + (col + 1));
              }
          }
          
        }
        return count;
    }
    
    public static void main(String[] args) 
    {
       GuidedPractice5B2DArrays  g = new GuidedPractice5B2DArrays ();
        int[][] myArray;
        int value;
        Scanner in = new Scanner(System.in);       

        myArray = g.createArray(10,10);
        g.print2DArray(myArray);
        
        System.out.println("Enter a number to search for: ");
        value = in.nextInt();
        System.out.println("Your number occurred " + g.countInstance(myArray, value) + " times"); 
    }
    
}
