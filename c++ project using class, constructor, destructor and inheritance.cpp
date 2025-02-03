#include <iostream>//allow the use of input and output function
#include <vector>//vector to be used to store student information
#include <string>//enable the use of std string
using namespace std;
 struct student
 {
 	private:
 		int password; //pasword for admin
 		public:
 			int id;//registration number for student
 			string name;//name for the student
 			
 			//display student information
 			void displayinformation const()
 			{
 				cout<<"\n---|student information-----|\n";
 				cout<<"student name: "<<name<<endl;
 				cout<<"registration number: "<<id<<endl;
 				
			 }
 };
 //function prototype here
 void registerNewStudent(vector<student>& students); //function to register new student
 void showinfo(const vector<student>& students);//function to read sudent information
 void upadatestudentinfo(vector<student>& students);//function to update student information
 void  deleteStudent(vector<student>& students);//function to erase student
  int main()
  {
  	int choice;
do
  }
  
  
  
  
