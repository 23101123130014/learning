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



int main()
{
secondClass ob;
ob.sets(3000);
cout<<"\n you salary is  ";
cout<<ob.gets();
ob.bonas = 2300;
cout<<"\n bonas is "<<ob.bonas;	
}
