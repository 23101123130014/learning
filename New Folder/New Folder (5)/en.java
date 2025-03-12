import java.util.Scanner;;
class en
{
  private String name;
  //getter is to be written here
   public String get()
   {
     return name;
   }
   //setter fuction i will write here
   public void sett(String n)
   {
    name = n; 
   }
   
   //main method is to be written here
   public static void main(String [] args)
   {
     Scanner o = new Scanner(System.in);
     System.out.println("what is your name");
     en ob = new en();
     
     String a = o.nextLine();
     ob.sett(a);
     String s = ob.get();
     System.out.print("your name is ");
     System.out.println(s);
   }}