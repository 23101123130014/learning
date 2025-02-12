#include <iostream>
using namespace std;
class shape
{
	public:
virtual void area() = 0;	
};

//derived class here

class rect: public shape
{
	public:
	void area() override
	{
		cout<<"\n area of the rectangle is equal to lenght times width";
	}
};

class tri: public shape
{
	public:
		void area() override
		{
			cout<<"\n area of the triabgle is equal half times base time height";
		}
	
};

int main()
{
	shape* point;
	rect ob;
	point = &ob;
	point->area();
	
	tri ob2;
	point = &ob2;
	point->area();
	
	return 0;
}
