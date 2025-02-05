#include <iostream>
using namespace std;

class number
{
private:
	double numbers;
public:	
number(double n)
{
	numbers = n;
	cout<<"\n constrcructer executing \n\n";
	cout<<"number: "<<numbers;
}
~number()
{
	cout<<"\n destructer is executing ";
	cout<<"\nnumber: "<<numbers;
}
};

void test()
{
	number six(6);
}

int main()


{


test();
number ob(7);	
}
