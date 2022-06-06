//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//create the class, Libc,with private string objects a, b, and c and member 
//functions seta(), geta(), setb(), getb(), setc(), and getc() to set and get the values.
#ifndef LIB_H
#define LIB_H
#include<string>
using namespace std;
//implementing class libc
class libc
{    
    private:
        string a;
        string b;
        string c;   
    public:
        void seta();     
        void setb();           //set the values of strings a,b,c
        void setc();
        string geta();
        string getb();               //get the values of stings a,b,c
        string getc();
};
#endif
