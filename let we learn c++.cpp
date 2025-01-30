#include <iostream>
using namespace std;
class sclass{
	public:
		int id;
		string name;
};
int main(){
	//first object is created here
	sclass juma;
	juma.id = 1;
	juma.name = ":Juma ahamed zimamoto";
	cout<<juma.id<<" "<<juma.name;
	cout<<endl;
	//second object is created here
	sclass jacob;
	jacob.id = 2;
	jacob.name = ":Jacob Godwin Mwansambe";
	//printing the output of the program
	cout<<jacob.id<<" "<<jacob.name;
	cout<<endl;
	//the second object
	sclass mpoki;
	mpoki.id = 3;
	mpoki.name = "mpoki godwin Mwansambe";
	cout<<mpoki.id<<" "<<mpoki.name;
}
