#include <iostream>
using namespace std;

class bar
{
	private:
		int drink;
		int people;
		public:
			bar(int p, int d)
			{
				drink=d;
				people=p;
			}
			int total_cash()
			{
				return drink*people;
			}
};


int main()
{
	bar b(40, 45);
	cout<<"total cash is: "<<b.total_cash();
	return 0;
}
