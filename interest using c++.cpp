#include <iostream>
using namespace std;
int main()
{
	float p,r,t,interest;
	cout<<"enter principle amount: ";
	cin>>p;
	cout<<"enter the value of rate: ";
	cin>>r;
	cout<<"enter the time: ";
	cin>>t;
	interest = (p*r*t)/100;	
	cout<<"simple interest is: ";
	cout<<interest;
}
