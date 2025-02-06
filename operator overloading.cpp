#include <iostream>
using namespace std;

class Number
{
	public: 
	int n;
	Number(int set_n)
	{
		n = set_n;
	}
	Number operator+(const Number &numA)
	{
		return Number(this->n + numA.n);
	}
};

int main()
{
Number a(5);
Number b(10);
Number c = a+b;	
cout <<"c.n: "<<c.n;
}
