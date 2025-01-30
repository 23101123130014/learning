#include <iostream>
using namespace std;
class myclass{
	public:
		myclass()
		{
			cout<<"this is the constructer it is called when the object of the class is created";
		}
};
int main()
{
	myclass thiobject;
	return 0;
}
