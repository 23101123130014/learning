#include <iostream>
using namespace std;
class base
{
	public:
		virtual void thiss() = 0;
		
};
class chil: public base{
	public:
		void thiss() override{
		cout<<"helllo";
		}
};
int main()
{
	cout<<hello the world\n";
	
	chil ob;
	ob.thiss();
}
