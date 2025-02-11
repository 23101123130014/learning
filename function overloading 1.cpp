#include <iostream>
using namespace std;
class Printer
{
	//acess specifier
	public:
		//show function is oveloaded usind different  parameter
		void show(char g){
			cout<<"\n grade is "<<g<<endl;
			
		}
		void show(string name){
			cout<<"\n name is "<<name<<endl;
		}
		void show(int id){
			cout<<"\n id is "<<id;
			
		}
		void show(double price)
		{
			cout<<"\n price is "<<price;
		}
};
//main function here
int main()
{
	Printer pp;
	pp.show('a');
	pp.show(12);
	pp.show("maize");
	pp.show(23.343);
	
	
}
