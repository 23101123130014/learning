#include <iostream>
using namespace std;

class the
{
	private:
		string pass;
		public:
			void set(string p)
			{
				pass = p;
			}
			void get()
			{
				cout<<pass;
			}
};

int main()

{
	the o;
	o.set("paswe23");
	o.get();
	
}
