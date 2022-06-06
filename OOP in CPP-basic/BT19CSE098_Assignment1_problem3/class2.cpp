#include<iostream>
#include "class1.h"
#include "class2.h"
using namespace std;
//initializing class members to 0
class2::class2()
{
	b = 0;
}

void class2::function2(class1 *ptr1)
{
	cout<< "CLASS2\n";
	cout<<ptr1->geta() <<endl;
}

void class2::setb(int y)
{                      //setter function to set the value of b
	b = y;
}
int class2::getb()
{
	return b;                                   //getter function  returns b
}

