#include <iostream>
using namespace std;
class cars{
	public:
		string name;
		string type;
		void display1(){
		cout<<"\n car is starting";
		}
		void display2(){
			cout<<"\n the car is stopping";
		}
};
int main()
{
	cars ob;
	ob.name= " toyota";
	ob.type = " automatic";
	cout<<ob.name<<ob.type;
	ob.display1();
	ob.display2();
}
