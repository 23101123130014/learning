#include <iostream>
using namespace std;

class room{
	public:
		int urefu;
		int width;
		int volume;
		
		room(int v, int w,int  h)
		{
		urefu = h;
		width = w;
		volume = v;	
		
		cout<<"the box is created with"<<"height "<<h<<", width"<<w<<", volume "<<v;
		}
	
	
};

int main()
{
room ob(2, 4, 8);
return 0;	
}
