//a program with a pointe on it
#include <iostream>
using namespace std;
int main()
{
	string name = "jacob";
	string* point = &name;
	cout<<name;
	cout<<endl;
	cout<<&name;
	cout<<endl;
	cout<<point;
	
}
