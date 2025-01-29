#include <iostream>
using namespace std;
//function declaration and definintion
//iam adding funciton with a default parametetr here
void thisfunction(string name = "godwin")
{
	cout<<"\"your name is: " <<name <<" \"\n";
	
	
}
int main()
{
	thisfunction();
	 thisfunction("jacob");
 thisfunction("mpoki");
	 thisfunction("Anna");
 thisfunction();
 thisfunction("Lupakisyo");
}
