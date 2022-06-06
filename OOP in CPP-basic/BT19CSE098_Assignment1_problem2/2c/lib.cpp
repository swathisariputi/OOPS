#include "lib.h"
#include<iostream> 
#include<string>
using namespace std;
//set the data values of libc
void libc::seta()
{
    a="swathi";
}
void libc::setb()
{
    b="24469";
}
void libc::setc()
{
    c="BT19CSE098";
}
//get the data values of libc
string libc::geta()
{
    return a;
}
string libc::getb()
{
    return b;
}
string libc::getc()
{
    return c;
}
