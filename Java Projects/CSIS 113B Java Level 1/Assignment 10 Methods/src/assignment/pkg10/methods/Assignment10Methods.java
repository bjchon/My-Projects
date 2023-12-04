/*
 *Name: Bryant Chon
 *ID:0550190
 *Date: 2/15/20
 * Description: Assignment 10 Methods
*/
package assignment.pkg10.methods;
import java.util.Scanner;

public class Assignment10Methods 
{
    public double celsiusToFarenheit(double cel)
    {
        cel = (cel*9/5)+32;
        return cel;
    }        
    
    public double kelvinToFahrenheit(double kel)
    {
        kel = (kel-273.15) * 9/5 + 32;
        return kel;
    }
    
    public double newtonToFahrenheit(double newt)
    {
        newt = newt*5.4545 + 32;
        return newt;
    }
    public static void main(String[] args) 
    {
        Assignment10Methods a = new Assignment10Methods();
        Scanner in = new Scanner(System.in);
        String function = "0", input;
        double value;
        System.out.println("This temperature conversion program converts other tempetaure types to Fahrenheit. The temperatures types are:");
        System.out.println("C - Celsius ");
        System.out.println("K - Kelvin ");
        System.out.println("N- Newton ");
        System.out.println("X - Exit The Program \n");
      
        while(!"X".equals(function))
        {
            System.out.println("Please enter a funtion then a value ");
            input = in.nextLine();
            String[] parsed = input.split(" ");
            function = parsed[0];
            function = function.toUpperCase();
            value = Double.parseDouble(parsed[1]);  
            if(function.equals("C"))                
                System.out.println(value + " " + function + " " + "is " + a.celsiusToFarenheit(value) + " in Fahrenheit");            
            if(function.equals("K"))
                System.out.println(value + " " + function + " " + "is " + a.kelvinToFahrenheit(value) + " in Fahrenheit");                
            if(function.equals("N"))
                System.out.println(value + " " + function + " " + "is " + a.newtonToFahrenheit(value) + " in Fahrenheit");            
        }
        
        System.out.println("Thanks for using the calculator ");
    }
    
}
