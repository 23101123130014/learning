import java.util.Scanner;
public class hero
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
   
   
   
  }
}