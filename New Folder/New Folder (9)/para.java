import java.util.Scanner;
class para
{
  static void m(int age, String name)
    
  {
    System.out.println("my name is " + name);
    System.out.println("my age is " + age);
  }
  
  // anothe functuion with parameter here
  static int sum(Scanner cc)
  {
    System.out.println("enter the first number: ");
    int x = cc.nextInt();
    
      System.out.println("enter the second number: ");
    int y = cc.nextInt();
    return x + y;
  }
  public static void main(String [] args)
  {
    m(23, "jacob");
    
    //second function definition will be done here let you see
   
    Scanner ob = new Scanner(System.in);
    System.out.print("sum of the two number given is ");
    System.out.println("the sum is " + sum(ob));
    
    System.out.println("perfome other addtion by folloewing the instruction below");
    System.out.print("other some is " + sum(ob));
   
  }
}
    
    