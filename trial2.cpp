#include <iostream>
using namespace std;
class cat
{
	private: 
	string name;
	string color;
	string favorite_toy;
	public:
		void print()
		{
			cout<<"Name"<<name;
			cout<<"color"<<color;
		}
		cat()
		{
			name="unknow";
			color="unkone";
			
		}
};
int main()
{
	cat cat1;
	cat1.print();
}
