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
 void register_student(stud vector<studen>& student);
