#include<iostream>
#include"student.h"
using namespace std;
int main()
{
	
	int n,i;
	cout<<"NUMBER OF STUDENTS:"<<endl;   
	cin>>n;
	student s[n];         //using array to store all students details
	for(i=0;i<n;i++)
	{
		s[i].get_data();    //call member function get_data()
		 //gettig all data one by one using loop
	}
	for(i=0;i<n;i++)          
	{                            //using loop,one by one
	    s[i].display_data();  //call display_data()
		 //printing or displaying all details entered 
	}
	return 0;
}

