#include <iostream>
using namespace std;
struct car{
	int age;
	string name;
	string location;
	
};
int main()
{
	car ths;
	ths.age = 23;
	ths.name = "tax";
	ths.location = "mbeya";
	cout<<ths.age<<" "<<ths.name<<" "<<ths.location<<endl;
	
	car thos;
	thos.age = 12;
	thos.name = "bajaji";
	thos.location = "mbeya";
	cout<<thos.age;
	cout<<" ";
	
	cout<<thos.name;
	cout<<" ";
	cout<<thos.location;
	return 0;
}
