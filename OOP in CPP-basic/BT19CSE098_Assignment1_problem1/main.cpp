#include "classA.h"
#include<iostream>
using namespace std;
int main()
{
	classA A;
	A.y=2;
	cout<< "A.y = " << A.y << endl;
  /*A.display1();                [Error] 'void classA::display1()' is private  
    A.display3();             	[Error] 'void classA::display3()' is protected 
    A.x=1;		                      [Error] 'int classA::x' is private
    cout<< "A.x = " << A.x << endl;      [Error] 'int classA::x' is private 
    A.z=3;                                [Error] 'int classA::z' is protected
	cout<< "A.z = " << A.z << endl;       [Error] 'int classA::z' is protected */
	A.display2();
	int a=1,b=3;
	cout<<"getting private and protected data members using public member functions"<<endl;
	cout << "A.x = " << A.getx(a) << endl;
	cout << "A.z = " << A.getz(b) << endl;
}
