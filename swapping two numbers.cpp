#include <iostream>
using namespace std;
int main()
{
	int a=100,b=20;
	cout<<"\n the numbers before swapping are: ";
	cout<<"\n a= " <<a;
	cout<<"\n b= "<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nafter swapping the numbers are: ";
	cout<<"\n b= "<<b;
	cout<<"\n a= "<<a;
}
