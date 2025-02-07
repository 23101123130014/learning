#include <iostream>
using namespace std;
class family
{
private:
int salary;
public:
//setter function
void sett(int s)
{
	salary = s;
	
	}
	//getter function
	int get()
	{
		return salary;
		}	
};

int main()
{
//object of the class here
family ob;
ob.sett(234234);
cout<<ob.get();	
	
	
}
