#include <iostream>
using namespace std;
class pro
{
	protected:
		int salary;
		
};

class pro2: public pro{
	
 public:
 int bonas;
 
 int setsalary(int s){
 salary = s;	
 }
 
 //function to get salary
int getsalary()
 {
 	return salary;
	 }	
};

int main()
{
pro2 ob;
ob.setsalary(1212);
cout<<ob.getsalary();	
	
	
}
