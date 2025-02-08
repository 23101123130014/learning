#include <iostream>
using namespace std;
class definition{
	public:
		void display()
		{
			cout<<"\n adding value to the product";
		}
		
	};
		
		class seconda : public definition{
			
	public:
	void display()
	{
		cout<<"\n you cant do everything ";
	}
	
		};
		
		class thirda : public definition{
	public:
	void display()
	{
		cout<<"\n create new entry in market";
	}
		};
		
		class forth : public definition{
	public:
	void display()
	{
		cout<<"\n simplify market access";
	}
		};
		
		
		class fith : public definition{
	public:
	void display()
	{
		cout<<"\n strenghten operation";
	}
		};
		
		class sixa : public definition{
			
	public:
	void display()
	{
	cout<<"\n emprove technology strength";	
	}
		};
		
	class sevena : public definition{
		
public:
	void display()
	{
		cout<<"\n developing finance strength";
	}
	};	
	





	int main()
	{
	definition ob;
	ob.display();
	seconda b;
b.display();
sevena o;
o.display();
forth x;
x.display();
	
		
	}

