#include <iostream>
using namespace std;

class firstClass{
	protected:
		int salary;
};

class secondClass: public firstclass{
	
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
	
}
