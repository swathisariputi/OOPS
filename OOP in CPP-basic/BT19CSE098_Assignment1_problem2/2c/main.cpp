#include<iostream>
#include"lib.h"
#include<string>
using namespace std; 
int main()
{
    libc l;
    l.seta();
    l.setb();
    l.setc();
    cout << "string a is " << l.geta() << endl;
    cout << "string b is " << l.getb() << endl;
    cout << "string c is " << l.getc() << endl;

}
