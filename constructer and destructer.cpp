#include <iostream>
using namespace std;
class one
{
public:
int id;
string age;
//constructer here
one(){
	cout<<"constructer is code on object creation\n";
}	
//destructer clean up when the object is destroyed
~one(){
	cout<<"destructer is called on object destruction\n";
}

void display(){
	cout<<"age is "<<age<<" and id is "<<id;
}
};

int main()
{
	
one o;	
o.id = 2;
o.age = 23;	

o.display();
cout<<endl;
}
