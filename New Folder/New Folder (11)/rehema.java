import java.util.ArrayList;
import java.util.Collections;
public class rehema
{
  public static void main(String [] args)
  {
    ArrayList<Integer> ob = new ArrayList<Integer>();
    ob.add(23);
    ob.add(12);
    ob.add(32);
    ob.add(10);
    Collections.sort(ob);
    for(int i : ob)
          {
      System.out.println(i);
    }
  }
}