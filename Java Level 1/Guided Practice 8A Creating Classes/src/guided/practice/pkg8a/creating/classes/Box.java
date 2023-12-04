/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/4/2020
 * Description: Box
*/

package guided.practice.pkg8a.creating.classes;

public class Box 
{
    private int length;
    private int width;
    private int height;
    
    public void setBox(int length, int width, int height)
    {
        this.length = length;
        this.width = width;
        this.height = height; 
    }
    public int areaBox()
    {
        return this.length * this.width * this.height;
    }   
}
