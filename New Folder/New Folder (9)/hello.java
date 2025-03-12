import java.util.Scanner;
class hello
{
  static int sum(int x, int y)
  {
    
    return x + y;
  }
  
  static double sum(double x, double y)
  {
    
    
    return x + y;
  }
  public static void main(String [] args)
  {
   
    //firt function definition here
    Scanner ob = new Scanner(System.in);
    System.out.print("enter the first number: ");
    int x = ob.nextInt();
    System.out.print("enter the second number: ");
    int y = ob.nextInt();
    
    //second function defintion here
    
    System.out.println("enter the first numbe ");
    double d = ob.nextDouble();
    System.out.println("enter the second number ");
    double m = ob.nextDouble();
    
  
   int f = sum(x, y);
   double z = sum(d, m);
   System.out.println("the sum of the number is " + f);
   System.out.println(z);
  }
}
