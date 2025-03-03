import java.util.Scanner;
public class soma
{
  public static void main(String [] args)
  {
    Scanner ob = new Scanner(System.in);
    int day = ob.nextInt();
  
    switch(day)
    {
      case 1:
        System.out.println("Monday");
        break;
        
      case 2:
        System.out.println("Sunday");
        break;
      case 3:
      System.out.println("Tuesday");
      break;
      
      case 4:
        System.out.println("wednesday");
        break;
        
      case 5:
        System.out.println("thursday");
        break;
        
      case 6:
        System.out.println("friday");
        break;
        
      case 7:
        System.out.println("saturday");
        break;
        
      default:
        System.out.print("invalid choice enter another choice:__ ");
    
    
    System.out.println("today is monday: ");
    }
  }
}