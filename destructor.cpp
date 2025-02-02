#include <iostream>
using namespace std;

class fomular{
	private:
	 int speed;
	 int pickup;
	 public:
	 	fomular(int p, int s)
	 	{
	 		cout<<"\n this is a constructor";
	 		cout<<endl;
	 		speed =s;
	 		pickup =p;
	 		 }
	 		void display()
	 		{
	 			cout<<"\nspeed: "<<speed;
	 			cout<<"\npickup: "<<pickup;
			 }
			 ~fomular()
			 {
			 	cout<<"\n thi is a distructor in c++";
			 }
		
};


int main(){
	
	
	fomular f(23, 100);
	f.display();
	
	return 0;
	
}
