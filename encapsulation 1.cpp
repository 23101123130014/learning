#include <iostream>
using namespace std;
 
 class employee
 {
 private:
 	//private attribute data member
 int salary;
 
 public:
 //setter
 void setsalary(int s)
 {
 	salary = s;
	 }
	 //getter
	 int getsalary()
	 {
	 	return salary;
		 }	
 };
 int main()
 {
 	
 	employee ob;
 	ob.setsalary(10000);
 cout<<"\n salary"<<ob.getsalary();
 	
 	
 	
 	
 	
 }
