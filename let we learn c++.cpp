//a program with struct
#include <iostream>
using namespace std;
struct 
{
	int age;
	string name;
	string location;
}mystructure, friends;
int main()
{
	mystructure.age = 23;
	mystructure.name= "jacob";
	cout<<mystructure.age;
	cout<<endl;
	cout<<mystructure.name;
	friends.name= "juma mtenzi";
	friends.location = "mbeya";
	cout<<endl;
	cout<<friends.name;
	cout<<endl;
	cout<<friends.location;
}
