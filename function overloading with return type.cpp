#include <iostream>
using namespace std;
class th{
	public:
		
		int calculate(int a, int b)
		{
			return a+b;
			cout<<endl;
		}
		
		double calculate(double c, double d){
			return c+d;
			cout<<endl;
		}
		
		string calculate(string z, string n){
			return z+n;
			cout<<endl;
		}
	
};

int main()
{
	
	th ob;
cout<<ob.calculate(23, 10);
cout<<ob.calculate(23.23, 23.34);
cout<<ob.calculate("hello ","this is the output");
	return 0;
	

}
