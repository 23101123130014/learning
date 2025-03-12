import java.util.Scanner;

class Pi {
  static void m(int age, String name) {
    System.out.println("my name is " + name);
    System.out.println("my age is " + age);
  }
  
  // another function with Scanner as a parameter
  static int sum(Scanner ob) {
    System.out.println("Enter the first number: ");
    int x = ob.nextInt();
    System.out.println("Enter the second number: ");
    int y = ob.nextInt();
    return x + y;
  }

  public static void main(String[] args) {
    m(23, "Jacob");

    Scanner ob = new Scanner(System.in);
    
    System.out.print("Sum of the two numbers given is: ");
    System.out.println(sum(ob));
  }
}
