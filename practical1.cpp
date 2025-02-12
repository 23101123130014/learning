#include <iostream>
using namespace std;
class className

{
public:
	int id;
	//default constructer
	className(){}
	
	//copy constructer
	className(const className &ob)
	{
		id = ob.id;
	}
	
};


int main()
{
className x;
x.id = 56;
	className x2 = x;
	cout<<x2.id;
}
