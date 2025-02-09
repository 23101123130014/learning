#include <iostream>
using namespace std;

class firstClass{
	protected:
		int salary;
};

class secondClass: public firstClass{
	
	public:
		int bonas;
	void sets(int s)
		{
		salary =s;	
		}
		int gets()
		{
			return salary;
		}
};


class Mwapaghata{
	public:
		string name;
		int phone number;
		string location;
		
		void display()
		{
			cout<<"personal detail for "<<name;
			cout<<"\n name: "<<name;
			cout<<"\n phone number: "<<phone_number;
			cout<<"\n location: "<<location;
		}
};



int main()
{
secondClass ob;
ob.sets(3000);
cout<<"\n you salary is  ";
cout<<ob.gets();
ob.bonas = 2300;
cout<<"\n bonas is "<<ob.bonas;	
}
