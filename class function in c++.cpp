#include <iostream>
using namespace std;

class person
{
	public:
	int id;
	string name;
	int age;
	void displayinf()
	{
		cout<<"id: "<<id<<" Name: "<<name<<" age: "<<age;
	}
};
int main()
{
	person ob;
	ob.id = 1;
	ob.name = "jacob";
	ob.age = 23;
	ob.displayinf();
}
