#include <iostream>
using namespace std;
class myconstructor
{
	public:
		myconstructor(int id, string name)
		{
			cout<<id<<": "<<name;
			
		}
};
int main()
{
	myconstructor ob(1, "jacob godwin mwnasambe");
	cout<<endl;
	myconstructor ob2(2, "Mpoki godwin mwansambe");
	cout<<endl;
	myconstructor ob3(3, "lupakisyo godwin mwansabe");
	cout<<endl;

}
