#include <iostream>
using namespace std;

class bas
{
public:
	
virtual void vir();	
};

class dev: public bas
{
	
	public:
void vir() override
{
	cout<<"hello";
	}	
};


int main()
{
dev ob;
ob.vir();	
}
