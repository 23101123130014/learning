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
 			void display const()
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
  	int choice; //variable to handle user input
vector<student> students; //vector to store student information

//for displaying user choice
do
{
cout<<"|----choose the choice below-------|";
cout<<"\n 1: register a student"; //choice to register new student
cout<<"\n 2: review student informayion";//call a funtion to read the student information
cout<<"\n 3: update student information";//choice to update student information
cout<<"\n 4: delete student"; //choice to delete student information

cout<<"\n 5: Exit"; 


//switch on various action on bases of the user choice
	switch(choice)	

}

  }
  
  
  
  
