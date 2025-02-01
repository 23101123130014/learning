#include <iostream>
using namespace std;
int main()
{
	float c,p,h,m,b,average;
	cout<<"\n program to calculate the area of the triangle\n";
	cout<<"\n enter the marks for chemistry: ";
	cin>>c;
	cout<<"\n enter the marks for physics: ";
	cin>>p;
	cout<<"\n enter the marks for history: ";
	cin>>h;
	cout<<"\n enter the marks of mathematics: ";
	cin>>m;
	cout<<"\n enter the marks of biology: ";
	cin>>b;
	average=(c+p+h+m+b)/5;
	cout<<"the average of the two numbers is: ";
	cout<<average;
	cout<<"%";
}
