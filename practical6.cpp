#include <iostream>
using namespace std;


class className{
	public:
		int z;
		//default constructer here
	className(){}
	
	//copy constructer
	className(const className &ob)
	{
	z = ob.z;	
	}
};

int main()
{
	className obb;
	obb.z = 23;
	className obb2 = obb;
	cout<<obb2.z;
	return 0;
}
