#include <iostream>
using namespace std;


class base{
	private:
		string password;
		
		public:
			void setter(string p)
			{
				password = p;
			}
			//getter
			string getter(){
				
				return password;
			}
			
			protected:
				string location;
				
				//setter for location
				public:
				void set(string l){
					location = l;
				}
				
				//getter for location
				
				string get()
				{
					return location;
				}
	
};
int main()
{
base q;
q.setter("23we33");
cout<<"\n password is ";
cout<<q.getter();

cout<<endl;
q.set("mbeya");
cout<<"location is "<<q.getter();	

}
