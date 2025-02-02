#include <iostream>
using namespace std;

class overload
{
	private:
		int res;
		public:
overload(int x, int y)
{
	res = x+y;
		}	
		overload(int x, int y, int z)
		{
			res = x*y*z;
			}
			int output(){
				return res;
			}
				
};



int main()
{
	overload o1(23, 12);
	overload o2(22, 21, 20);
	cout<<o1.output();
	cout<<endl;
	cout<<o2.output();
}
