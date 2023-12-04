/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/4/2020
 * Description: Rectangle
*/
package guided.practice.pkg8a.creating.classes;

public class Rectangle 
{
    private int length;
    private int width;
    
    public void setRectangle(int length, int width)
    {
        this.length = length;
        this.width = width;
    }
    public int area()
    {
        return this.length * this.width;
    }
}
