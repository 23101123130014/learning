#include <iostream>
using namespace std;
class fclass
{
	public:
		string name;
		int age;
};
int main()
{
fclass fobject;
fobject.name = "this object has ";
fobject.age = 12;
cout<<fobject.name;
cout<<endl;
cout<<fobject.age;	
}
