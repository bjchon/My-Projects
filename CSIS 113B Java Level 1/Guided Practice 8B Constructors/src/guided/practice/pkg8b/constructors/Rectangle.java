/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 3/4/2020
 * Description: Rectangle
*/

package guided.practice.pkg8b.constructors;

public class Rectangle 
{
    private int length;
    private int width;
    
    public Rectangle(int length, int width)
    {
        this.setRectangle(length, width);
    }
    
    public Rectangle()
    {
        this(1,1);
    }
    
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
