#include <iostream>
using namespace std;

class ecapsulation
{
public:
	virtual void myfunction();

	
};

class polymorphism: public ecapsulation
{
	
void myfunction()  override{

cout<<"hello";
}	
};

int main()
{
polymorphism ob;
ob.myfunction();	
	return 0;
}
