#include<iostream>
#include "lib.h"
#include<string>
using namespace std;
int main()
{
    libc l;      //creating object
    l.setstring();            //calling member function
    cout << "string values are " << endl;
    l.getstring();    //calling member function
}
