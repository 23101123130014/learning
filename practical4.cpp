#include <iostream>
using namespace std;
//abstruct class here
class Base
{
	public:
virtual void hello() = 0;	
};

//derived class here

class mtoto: public Base
{
	void hello() override
	{
		cout<<"welcome to this coding tutorial";
	}
};

int main()
{
	Base* point;
	mtoto obj;
	point = &obj;
	point->hello();
	
}
