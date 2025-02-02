#include <iostream>
using namespace std;

class book
{
	private:
		int pages;
		public:
			book()
			{
				pages = 250;
				cout<<"\n the number of pages in  the book";
				cout<<"\n number of pages is: "<<pages;
			}
};

int main()
{
	book b;
	return 0;
}
