#include <iostream>
using namespace std;

class number
{
public:
int n;
number(int set_n)
{
	n = set_n;
	}
	
	number(const number& the)
	{
		n = 2*the.n;
		}	
	
};

int main()
{
number num1(23);
cout<<num1.n;
cout<<endl;
number num2 = num1;
return 0;	
	
}
