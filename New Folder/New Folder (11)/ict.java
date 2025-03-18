import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class ict
{
  public static void main(String [] args)
  {
    System.out.println("array in java object oriented programing language");
    Scanner ob = new Scanner(System.in);
    ArrayList<String> students = new ArrayList<String>();
    
    System.out.println("enter the id of the car you want to add");
    int n = ob.nextInt();
   ob.nextLine();
    
   System.out.println("Enter the " + n + " cars names yo want to create");
   
   for(int i = 0; i < n; i++)
   {
     
     System.out.println("Car " + (i + 1) + ":");
     String car = ob.nextLine();
     students.add(car);
     
    
  }
   System.out.println(students);
   ob.close();
  }}