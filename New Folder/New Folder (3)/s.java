import java.util.Scanner;
public class s
{
  public static void main(String [] args)
  {
    Scanner ob = new Scanner(System.in);
    
    System.out.println("enter the first number to be compared");
    int a = ob.nextInt();
    System.out.println("enter the second number to be compared");
    int b =ob.nextInt() ;
     int sum = a + b;
     System.out.println("sum is " + sum);
    System.out.println("this is the maximum number " + Math.max(a, b));
  }
}