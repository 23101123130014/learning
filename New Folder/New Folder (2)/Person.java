public class Person {
   private String name;

   // Getter
   public String getName() {
     return name;
   }

   // Setter
   public void setName(String newName) {
     this.name = newName;
   }


//static void method here
public static void main(String [] args)
{
  System.out.println("this is all about encapsulation");
  Person ob = new Person();
  ob.setName("jacob");
  System.out.println(ob.getName());
}
}


                  