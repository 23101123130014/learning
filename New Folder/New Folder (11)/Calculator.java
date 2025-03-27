import java.util.Scanner; // Import Scanner class for user input

public class Calculator {
    int a; // First number for operations
    int b; // Second number for operations

    // Method to perform addition
    public int add() {
        System.out.println("The result of addition:");
        return a + b;
    }

    // Method to perform multiplication
    public int multiplication() {
        System.out.println("The result of multiplication:");
        return a * b;
    }

    // Method to perform division
    public int division() {
        System.out.println("The result of division:");
        return a / b;
    }

    // Method to perform subtraction
    public int minus() {
        System.out.println("The result of subtraction:");
        return a - b;
    }

    public static void main(String[] args) {
        // Display a welcome message to the user
        System.out.println("Let's design an arithmetic operation calculator");
        Scanner ob1 = new Scanner(System.in); // Create Scanner object for user input

        Calculator ob = new Calculator(); // Create an object of Calculator class
        int choice; // Variable to store user's choice

        // Begin a loop to allow multiple operations
        do {
            System.out.println("\nChoose from the options below:");
            System.out.println("1. Addition");
            System.out.println("2. Multiplication");
            System.out.println("3. Division");
            System.out.println("4. Subtraction");
            System.out.println("5. Exit");
            System.out.print("Enter your choice (1, 2, 3, 4, 5): ");

            choice = ob1.nextInt(); // Accept user's choice

            // Check for invalid choices
            if (choice < 1 || choice > 5) {
                System.out.println("Invalid choice! Please choose a valid option (1 to 5).");
                continue; // Restart loop for valid input
            }

            // If the user chooses to exit
            if (choice == 5) {
                System.out.println("You are exiting the program. Goodbye!");
                break; // Exit the loop
            }

            // Prompt user for input numbers
            System.out.print("Enter the first number: ");
            ob.a = ob1.nextInt(); // Store first number
            System.out.print("Enter the second number: ");
            ob.b = ob1.nextInt(); // Store second number

            // Perform operations based on user's choice
            switch (choice) {
                case 1:
                    System.out.println(ob.add()); // Call addition method
                    break;
                case 2:
                    System.out.println(ob.multiplication()); // Call multiplication method
                    break;
                case 3:
                    if (ob.b != 0) { // Check for division by zero
                        System.out.println(ob.division()); // Call division method
                    } else {
                        System.out.println("Division by zero is not allowed!"); // Error message
                    }
                    break;
                case 4:
                    System.out.println(ob.minus()); // Call subtraction method
                    break;
            }
        } while (true); // Loop continues until user chooses to exit

        ob1.close(); // Close the Scanner object to free resources
    }
}
