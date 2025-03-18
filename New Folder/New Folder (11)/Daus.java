

public class Daus
{
  public static void main(String [] args)
  {
    try{
      
    int[] num = {1, 3, 4, 6};
    System.out.println(num[6]);
    }
    catch(Exception p)
    {
      System.out.println("something went wrong");
    }
    finally
    {
      System.out.println("it is over catch and try");
    }
  }
}