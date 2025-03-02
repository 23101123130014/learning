class en
{
 private int umri;
  
  //setter will be here
  public void setn(int age)
  {
    this.umri = age;
  }
 
  //getter will be written here
  
  public int getn()
  {
    return umri;
  }
    
  static void display()
  {
    System.out.println("this is all about encapsulation");
  }
  public void dis()
  {
    System.out.println("this is all about");
  }
  public static void main(String [] args)
  {
   System.out.println("encapsulation");
   en ob = new en();
   ob.setn(34);
  System.out.println(ob.getn());
  
  display();
  System.out.println("_______________");
  ob.dis();
  
  }
}