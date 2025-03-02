class moja
{
  protected int age = 56;
   static void display()
   {
     System.out.println("hello learners");
   }
}
    class mbili extends moja
    {
      static int year;
      String city;
      public static void main(String [] args)
      {
       mbili ob = new mbili();
       mbili.year = 23;
       System.out.println(mbili.year);
      }
    }