#include <iostream>
using namespace std;
class animals
{
	public:
		void animalsound()
		{
			cout<<"animal sounds\n";
		}
};

class cow: public animals{
	public:
	void animalsound(){
		cout<<"cow saya momo\n";
	}
};
class goat: public animals{
	public:
		void animalsound(){
		cout<<"goat says mee \n";
		}
	
};
int main()
{
animals ob1;
cow ob2;
goat ob3;

ob1.animalsound();
ob2.animalsound();
ob3.animalsound();	
	
}
