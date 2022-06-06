#include<iostream>
#include<cstring>
#include"student.h"
using namespace std;
//class constructor initializes all data members to zero(NULL)
    student :: student()
	{
		rollno=0;
		name="\0";
		mark1=0;
		mark2=0;      
		mark3=0;
		total=0;
		average=0.0;
	}
	void student :: get_data()      //giving all the student details asked
	{
	   cout<<"enter rollno"<<endl;
	   cin>>rollno;
	   cout<<"enter name"<<endl;
	   cin>>name;
	   cout<<"enter mark1"<<endl;
	   cin>>mark1;
	   cout<<"enter mark2"<<endl;
	   cin>>mark2;
	   cout<<"enter mark3"<<endl;
	   cin>>mark3;
	   total=mark1+mark2+mark3;
	   average=1.0*total/3;
	}
	void student::display_data()       //printing all details entered
	{
		cout<<"roll no:"<<rollno<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"mark1:"<<mark1<<endl;
		cout<<"mark2:"<<mark2<<endl;
		cout<<"mark3:"<<mark3<<endl;
		cout<<"total:"<<total<<endl;
		cout<<"average:"<<average<<endl;
	}

