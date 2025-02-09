#include <iostream>
using namespace std;

class firstClass{
	protected:
		int salary;
};

class secondClass: public firstClass{
	
	public:
		int bonas;
	void sets(int s)
		{
		salary =s;	
		}
		int gets()
		{
			return salary;
		}
};


class Mwapaghata{
	public:
		string name;
		int phone_number;
		string location;
		
		void display()
		{
			cout<<"\n personal detail for "<<name;
			cout<<"\n name: "<<name;
			cout<<"\n phone number: "<<phone_number;
			cout<<"\n location: "<<location;
		}
};


class jacob: public Mwapaghata{
	
	
};

class mpoki: public Mwapaghata{
	
};



int main()
{
secondClass ob;
ob.sets(3000);
cout<<"\n you salary is  ";
cout<<ob.gets();
ob.bonas = 2300;
cout<<"\n bonas is "<<ob.bonas;	



Mwapaghata obb;
obb.name = "godwin afumwisye mwandunga";
obb.phone_number = 28923;
obb.location = "mbeya";

obb.display();



jacob jj;
jj.name = "jacob godwin mwansambe";
jj.phone_number = 8923;
jj.location ="zimbabwe";
}
