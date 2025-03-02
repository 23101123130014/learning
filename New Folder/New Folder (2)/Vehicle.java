class Vehicle {
  protected String brand = "Ford";
  static void honk() {
    System.out.println("Tuut, tuut!");
  }
}

class Car extends Vehicle {
  private String modelName = "Mustang";
  public static void main(String[] args) {
    Car myFastCar = new Car();
   honk();
    System.out.println(myFastCar.brand + " " + myFastCar.modelName);
    System.out.println("hello");
  }
}
