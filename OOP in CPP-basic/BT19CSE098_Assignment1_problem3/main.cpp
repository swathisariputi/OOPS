#include<iostream>
#include "class1.h"
#include "class2.h"
using namespace std;

int main()
{
	//declaration
	int l,m;
	cout<<"Enter the values for l and m\n";
	cin>> l;
	cin>> m;
	class1* ptr1 = new class1();
	class2* ptr2 = new class2();      
	ptr1->seta(l);
	ptr2->setb(m);
	ptr1->function1(ptr2);
	ptr2->function2(ptr1);
}

