#include <iostream>
using namespace std;

class firstClass{
	protected:
		int salary;
};

class secondClass: public firstClass{
	
	public:
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
cout<<ob.gets();	
}
