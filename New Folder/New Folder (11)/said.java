import java.util.ArrayList;
public class said
{
  public static void main(String [] args)
  {
    ArrayList<Integer> ob = new ArrayList<Integer>();
    ob.add(12);
    ob.add(32);
    ob.add(22);
    //System.out.println(ob);
   
    ob.set(0, 34);
     System.out.println(ob.get(0));
    for(int i: ob)
    {
      System.out.println(i);
    }
  }
}
  
