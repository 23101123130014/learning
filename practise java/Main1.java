import java.util.Scanner;
import java.util.ArrayList;

public class Main1
{
  public static void main(String [] args)
  {
    
    Scanner input = new Scanner(System.in);
    ArrayList<Integer> Number= new ArrayList<Integer>();
    
    
    
    System.out.print(" enter the amount of Phone Number you want to enter: ");
    int amount = input.nextInt();
    
    for(int x = 0; x < amount; x++)
    {
      System.out.print("enter the phone number: ");
      int number = input.nextInt();
      Number.add(number);
    }
    
    for(int i = 0; i < amount; i++)
    {
      System.out.println(Number.get(i));
    }
    
      
  }
}
