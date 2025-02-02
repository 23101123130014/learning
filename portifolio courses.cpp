#include <iostream>
using namespace std;

class Bank_account
{
	public:
		string name;
		int balance;
};

int main()
{
 Bank_account account1;
 account1.name = "jacob";
 account1.balance = 23434;
 cout<<account1.name;
 cout<<account1.balance;
 cout<<endl;
 
 Bank_account account2;
 account2.name = "mpoki";
 account2.balance = 23000;
 
 cout<<account2.name<<" "<<"has "<<account2.balance;
	
}
