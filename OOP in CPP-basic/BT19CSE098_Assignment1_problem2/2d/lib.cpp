#include "lib.h"
#include<iostream>
#include<string>
using namespace std;
//set string
void libc::setstring()
{ 
   s[0]="swathi";
   s[1]="24469";
   s[2]="BT19CSE098";
}
void libc::getstring()
{            // get string
    int i;
    for(i=0;i<3;i++)
    {
        cout << "s[" << i << "] is " << s[i] << endl;
    }   
}

