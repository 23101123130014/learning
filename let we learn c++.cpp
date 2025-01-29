#include <iostream>
using namespace std;
int thisfunction(int x = 23, int y = 2)
{
	return x + y;
}
int main()
{
	cout<<thisfunction();
	cout<<endl;
	cout<<thisfunction(21, 1);
	cout<<endl;
	cout<<thisfunction(21);
}
