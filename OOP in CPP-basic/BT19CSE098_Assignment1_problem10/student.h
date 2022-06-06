//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//DESCRIPTIN OF PROGRAM:printing students details (name,roll number,marks,average etc)
#ifndef STUDENT_H
#define STUDENT_H
#include<cstring>
using namespace std;
//implement a class student
class student
{
  private:
	int rollno;
	string name;    //private data members
	int mark1;
	int mark2;
	int mark3;
	int total;
	float average;
  public:
    student();
	void get_data();      //public member functions
	void display_data();
};
#endif
