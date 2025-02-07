#include <iostream>
using namespace std;
class th
{
	public:
		int id;
		
		//defult constructer
		th()
		{
			id = 1;
			cout<<"default constructer here\n";
			cout<<endl;
		}
		//parameterized constructer here
		
		
	th(int x)
		{
			id = x;
			cout<<endl;
			cout<<"parameterized constructer here\n";
			cout<<endl;
		}
		
		
		
		th(const th& a)
		{
			id = a.id;
			cout<<"copy constructer here";
		}
		void display()
		{
			cout<<id;
		}
		
		~th()
		{
			cout<<endl;
			cout<<"\n here \n";
			
		}
};


int main()
{
th ob;
cout<<endl;
cout<<"\n id is for constructer is "<<ob.id;

th ob2(2);
cout<<endl;
cout<<"\n this is parameterized constructer id is "<<ob2.id;	

th ob3 = ob;
cout<<endl;
th ob4= ob2;
cout<<endl;
ob3.display();	
	
}
