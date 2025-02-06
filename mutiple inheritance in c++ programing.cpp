#include <iostream>
using namespace std;
class baba
{
	public:
	int dna;
	
		void onesha()
		{
	
	cout<<"dna is"<< dna;
	}
};

class mama
{
public:
int age;
	
};
class mtoto: public baba, public mama
{
	public:
		string location;
};

int main()
{
	
	
	mtoto ob;
	ob.dna	= 12;
	ob.onesha();
	ob.age = 23;
	cout<<endl;
	cout<<ob.age;
	
	
}
