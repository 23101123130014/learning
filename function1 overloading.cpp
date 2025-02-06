#include <iostream>
using namespace std;
int add(int x,  int y)
{
	return x + y;
}
int add(int x, int y, int z)
{
	return x+y+z;
}
int add(double x, double y, double z)
{
	return x+y+z;
}
class Add{
	public:
		int dd(int x, int y)
		{
			return x+y;
		}
		double dd(double x, double y, double z)
		{
			return x+y;
		}
};
int main()
{
cout<<add(2, 5);
cout<<endl;
cout<<add(3, 5, 7);	
cout<<endl;
cout<<add(2.3, 3.4, 5.34);
Add ob;
cout<<ob.dd(10, 23);
cout<<endl;
cout<<ob.dd(32.3, 23.2);
	return 0;
}
