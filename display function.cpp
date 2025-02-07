#include <iostream>
using namespace std;

class person
{
public:
string name;
int age;
void display()
{
	cout<<"\n myname is "<<name<<" "<<" i am "<<age<<" yeays old";
	}	
};


int main()

{
person n;
n.name = "jacob";
n.age  = 223;
n.display();	
}
