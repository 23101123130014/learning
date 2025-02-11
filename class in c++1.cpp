#include <iostream>
using namespace std;
//class name
class mwanafunzi
{
	//acess specific
public:
	//data memeber or attribute
string name;
int id;	
//member function
void display()
{
	cout<<"student detail here\n"<<"Id: "<<id<<endl<<"Name: "<<name<<endl;
	
	
}
};

int main()
{
	mwanafunzi a;
	a.name = "JACOB GODWIN MWANSAMBE";
	a.id = 1;
	a.display();
}
