import java.util.Scanner;
import java.util.ArrayList;

public class Sims2
{
  public static void main(String[] args)
  {
    int k;
    int d;
    String ona;
    int choice = 0;
    Scanner input = new Scanner(System.in);
    ArrayList<String> Student = new ArrayList<String>();

    do
    {
      try
      {
        System.out.println("1: Add students");
        System.out.println("2: Read Students");
        System.out.println("3: Update");
        System.out.println("4: Delete");
        System.out.println("5: Exit");
        System.out.println("Choose an option above:");
        choice = input.nextInt();
        input.nextLine();

        switch (choice)
        {
          case 1:
            System.out.println("Welcome to add the student");
            System.out.print("Enter the number of students you want to add: ");
            int u = input.nextInt();
            input.nextLine();
            for (int z = 0; z < u; z++)
            {
              System.out.print("Name: ");
              String o = input.nextLine();
              Student.add(o);
            }
            break;

          case 2:
            System.out.println("Welcome to read the students");
            if (Student.isEmpty())
            {
              System.out.println("No students registered");
            }
            else
            {
              System.out.println("Student List:");
              k = Student.size();
              for (int m = 0; m < k; m++)
              {
                System.out.print((m + 1) + ": ");
                System.out.println(Student.get(m));
              }
            }
            break;

          case 3:
            if (Student.isEmpty())
            {
              System.out.println("No students found, you cannot update.");
            }
            else
            {
              k = Student.size();
              for (int m = 0; m < k; m++)
              {
                System.out.print((m + 1) + ": ");
                System.out.println(Student.get(m));
              }
              System.out.print("Choose the number of the student to update among the above: ");
              d = input.nextInt();
              input.nextLine();
              if (d > 0 && d <= Student.size())
              {
                System.out.println("Enter the new name: ");
                String y = input.nextLine();
                ona = Student.set(d - 1, y);
                System.out.println("You have successfully updated: " + ona + " to " + Student.get(d - 1));
              }
              else
              {
                System.out.println("Element not found");
              }
            }
            break;

          case 4:
            if (Student.isEmpty())
            {
              System.out.println("No students found, you cannot delete.");
            }
            else
            {
              k = Student.size();
              for (int m = 0; m < k; m++)
              {
                System.out.print((m + 1) + ": ");
                System.out.println(Student.get(m));
              }
              System.out.print("Choose the number of the student to delete among the above: ");
              d = input.nextInt();
              input.nextLine();
              if (d > 0 && d <= Student.size())
              {
                String ui = Student.get(d - 1);
                Student.remove(d - 1);
                System.out.println("You have successfully deleted the student named: " + ui);
              }
              else
              {
                System.out.println("Element does not exist");
              }
            }
            break;

          case 5:
            System.out.println("Exiting the program");
            break;

          default:
            System.out.println("Incorrect choice");
        }
      }
      catch (Exception e)
      {
        System.out.println("Invalid input! Please enter a number.");
        input.nextLine(); // Clear the invalid input
      }
    }
    while (choice != 5);

    System.out.println("Goodbye");
    input.close();
  }
}
