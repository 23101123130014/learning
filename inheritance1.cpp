#include <iostream>
using namespace std;
//base class
class my{
	public:
	string name;
	void disply()
	{
		cout<<"\n your name is "<<name;
	}
};
//derived class
class one: public my{
	string location;
};

int main()
{
	
one ob;
ob.name = "farisayo";
cout<<ob.name;	
ob.disply();
}
