//multleval inheritance
#include <iostream>
using namespace std;
//base class
class babu
{
	public: 
	string name1;
	string name2;
		string name3;
	void display()
	{
	
	cout<<"hello";
	cout<<endl;
		}
};

//derived child class
class mtoto: public babu{
	
	public:
	int id;	
		
	
};
//derived from child class
class mjukuu: public mtoto
{
public:
	int age;

};
int main()
{
	mjukuu ob;
	ob.name1 = "jacob";
	cout<<ob.name1;
}




