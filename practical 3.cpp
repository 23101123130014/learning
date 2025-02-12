#include <iostream>
using namespace std;
class Base
{
public:
string name;

virtual void display() = 0;
	
};
//derive class here

class derived: public Base
{
	public:
	int age;
	
	void display()
	{
		cout<<"derived class is called using pointer";
	}
	
};


int main()
{
	Base* p;
	derived ob;
	p = &ob;
	p->display();
	
}
