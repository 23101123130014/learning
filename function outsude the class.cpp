#include <iostream>
using namespace std;

class df
{
public:
void myf();	
};

void df::myf()
{
	cout<<"function outside the class";
}


int main()
{
df o;
o.myf();	
}
