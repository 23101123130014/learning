import java.util.Scanner;
public class h4
{
  public static void main(String [] args)
  {
    Scanner ob = new Scanner(System.in);
    System.out.println("enter the value of x");
    int x = ob.nextInt();
    System.out.println("enter the value of y");
    int y = ob.nextInt();
    
   if(x > y)
   {
     System.out.println("x ix greater than y");
                          }
   
   if (y > x)
   {
     System.out.println("x is greater than y");
   }
else if(x == y)
{
  System.out.println("x equal to  y");
}

else if(x != y)
{
  System.out.println("x is note equal to y ");
}
   
    
  }
}