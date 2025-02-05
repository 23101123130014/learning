#include <iostream> // Include the iostream library for input/output operations
using namespace std; // Use the standard namespace to avoid writing std:: repeatedly

class employee // Define a class named employee
{
public: // Declare the public section of the class (accessible from outside)
    string name; // Declare a public string variable named name (not used in this example)
    int balance; // Declare a public integer variable named balance (not used in this example)

    void set_salary(double p_salary) // Declare a public function to set the salary
    {
        salary = p_salary; // Assign the passed salary (p_salary) to the private member variable salary
    }

    double get_salary() // Declare a public function to get the salary
    {
        return salary; // Return the value of the private member variable salary
    }
    
    void print_bonas()
    {
    	cout<<"bonas: "<<bonasamount();
	}

private: // Declare the private section of the class (accessible only within the class)
    double salary; // Declare a private double variable named salary
    
    double bonasamount()
    {
    	return salary*0*1;
    	
	}
};

int main() // The main function where the program execution begins
{
    employee employee1; // Create an object of the employee class named employee1

    employee1.set_salary(50000); // Call the set_salary function of employee1 to set the salary to 50000

    cout << "\n salary " << employee1.get_salary(); // Print the salary to the console by calling get_salary

    return 0; // Return 0 to indicate successful program execution
    employee1.print_bonas();
}
