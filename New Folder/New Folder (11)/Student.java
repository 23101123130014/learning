public class Student {

    String name;
    int rollNo;
    int age;

    void display() {
        System.out.println("The student " + name + " has id " + rollNo);
    }
}

class StudentMain {
    public static void main(String[] args) {
        Student ob = new Student();
        ob.name = "Jacob";
        ob.rollNo = 23;
        ob.display();
        
        
        
    }
}
