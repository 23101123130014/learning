#include <iostream>
using namespace std;
class phone
{
	public:
	string name;
	string color;
	string price;
void displayinfo(){
	cout<<"name: "<<name<<" color: "<<color<<" price: "<<price;
}	
};
int main()
{
	phone sifa;
	sifa.name = "oppo";
	sifa.color = "blue";
	sifa.price = "230000$";
	sifa.displayinfo();
}
