/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/19/20
 * Description: Assignment 14 Two Dimensional Arrays
*/
package assignment.pkg14.pkg2.dimensional.arrays;
import java.util.Random;

public class Assignment142DimensionalArrays 
{
     public int[][] create2DArray(int rSize, int cSize)
    {
        Random r = new Random();
        int[][] array = new int[rSize][cSize];
        
        for(int row = 0; row < array.length; row++)
        {
                for(int col = 0; col < array[0].length; col++)
                {
                        array[row][col] = r.nextInt(100)+1;
                }          
        }
        
        return array;
    }
    
    public void print2DArray(int[][] array)
    {      
        for(int row = 0; row < array.length; row++)
        {
          for(int col = 0; col < array[0].length; col++)         
                System.out.print(array[row][col] + "\t");
          System.out.println("\n");
        }
    }
    
    public int createCoords(int[][] array, int[][] myArray)
    {
        int count = 0, i = 0, j = 0;        
        
        for(int row = 0; row < array.length; row++)
        {        
              for(int col = 0; col < array[0].length; col++)
                {                    
                    if(array[row][col]%3==0)
                    {                    
                        myArray[i][j] = row;
                        j++;
                        myArray[i][j] = col;
                        j =0;                                           
                        i++;
                        count++;               
                    }
                }         
        }           
        
        return count;
    }
    
    public int[][] fillLocations(int[][] array)
    {
        for(int row = 0; row < array.length; row++)
        {         
              for(int col = 0; col < array[0].length; col++)
                {                   
                    if(array[row][col]%3==0)               
                        array[row][col] = -1;                                                  
                }          
        }            
        return array; 
    }
    
    public static void main(String[] args) 
    {
        Assignment142DimensionalArrays  g = new Assignment142DimensionalArrays ();
        int[][] myArray;
        int[][] coordinateArray = new int[100][2];
        int[][] coords;
        int numberOfCoords;

        myArray = g.create2DArray(10,10);
        g.print2DArray(myArray);
        
        System.out.println("*************************");
        System.out.println("After Create Coords");
        System.out.println("*************************");
                
        numberOfCoords = g.createCoords(myArray,coordinateArray);
        int[][] coordinateArray2 = new int[numberOfCoords][2];
        numberOfCoords = g.createCoords(myArray,coordinateArray2);
        coords = g.fillLocations(myArray);
        g.print2DArray(coords);
        
        System.out.println("*********************");
        System.out.println("Number of Coordinates: " + numberOfCoords);
        System.out.println("*********************" + "\n");
        
        System.out.println("*************************");
        System.out.println("Coordinates");
        System.out.println("*************************");
        g.print2DArray(coordinateArray2);     
    }
    
}
