import java.util.Scanner;
public class h1
{
  public static void main(String [] args)
  {
    Scanner ob = new Scanner(System.in);
    System.out.println("enter the value of x");
    int x = ob.nextInt();
    System.out.println("enter the value of y");
    int y = ob.nextInt();
    
   System.out.print("is x greater than y: ");  
   System.out.println( x > y);
   
    System.out.print("is y greater than x: ");  
   System.out.println( y > x);
   
   System.out.print("the maximum number is: ");
   System.out.println(Math.max(x, y));
   
   System.out.print("the minimum number is: ");
   System.out.println(Math.min(x, y));
   
   
   
  }
}