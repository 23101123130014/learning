#include <iostream>
using namespace std;

class base
{
	public:
		virtual void thiss();
};


class child: public base
{
public:
	void thiss() override
	{
		cout<<"hello the word this is implementation of virtual fuction";
	}
	
};

int main()
{
	
	child mt;
	mt.thiss();
	
	return 0;
}
