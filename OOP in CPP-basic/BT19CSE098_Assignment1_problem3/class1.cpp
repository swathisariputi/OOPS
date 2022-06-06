#include<iostream>
#include "class1.h"
#include "class2.h"
 
using namespace std;
//initializing class members to 0
class1::class1()
{
    a=0;
}
 
void class1::function1(class2 *ptr2)
{
    cout<<"CLASS1"<<endl;
    cout<<ptr2->getb()<<endl;
}


void class1::seta(int x)
{                        //setter function to set the value of a
    a=x;
}
 
int class1::geta()
{                               //getter function returns a
    return a;
}

