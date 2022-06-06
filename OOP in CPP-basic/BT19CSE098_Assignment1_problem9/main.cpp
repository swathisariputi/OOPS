#include<iostream>
#include"complex.h"
using namespace std;
int main()
{
	complex c1,c2,c;  //creating object
	c1.get_data();
	c2.get_data();     //calling member functions
	c1.show();
	c2.show();
	c.sum(c1,c2);
}

