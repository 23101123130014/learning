import java.util.Scanner;
public class Learn
{
  int id = 1;
  String name;
  
  void display()
  {
    System.out.println("---student detail here---");
    
    System.out.println("name " + name);
    System.out.println("id " + id);
}
  static void welcome()
  {
    System.out.println("your welcome to our system essentialy for the management of stdent information");
  }
  
  public void welcome2()
  {
    System.out.println("good journey");
  }
  
  // a constructer is ti be wrritten here
  public Learn()
  {
    System.out.println("this is a constructer");
    name = "jacob";
  }
  public static void main(String [] args)
  {
    
    welcome();
     Learn oo = new Learn();
    oo.welcome2();
    Scanner ob = new Scanner(System.in);
    //object of class learn
   
    Learn p1 = new Learn();
    Learn p2 = new Learn();
    
    System.out.print("enter the id of the first person ");
   p1.id = ob.nextInt();
   ob.nextLine();
   
    System.out.println("enter the name of the first student");
    p1.name = ob.nextLine();
   
    
    System.out.print("enter the id of the second person ");
    p2.id = ob.nextInt();
    ob.nextLine();
    
    System.out.println("enter the name of the second student ");
    p2.name = ob.nextLine();
    
    
    System.out.println("the id of the first student is " + p1.id);
    System.out.println("the id of the second student is " + p2.id);
    
    System.out.println("the information for the first student are ");
    p1.display();
    
    System.out.println("the information for the second student are");
    p2.display();
    
   // Fyear on = new Fyear();
    //on.name = "jacob";    
    
    
  }
}