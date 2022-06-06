#include "classA.h"
#include<iostream>
using namespace std;
classA :: classA()             //intializes all values to 0
{
	x=0;
	y=0;
	z=0;
}
void classA :: display1()           
{
	cout << "accessing private member function" << endl;                       
}   
void classA :: display2()            	
{
	cout << "accessing public member functions" << endl;                       
} 
int classA :: getx(int a)
{
	x= a;
	return x;
}
int classA :: getz(int b)
{
	z= b;
	return z;
}
void classA :: display3()                  
{
	cout << "accessing protected member function" << endl;
}



