//a program with struct
#include <iostream>
using namespace std;
struct 
{
	int age;
	string name;
}mystructure;
int main()
{
	mystructure.age = 23;
	mystructure.name= "jacob";
	cout<<mystructure.age;
	cout<<endl;
	cout<<mystructure.name;
}
