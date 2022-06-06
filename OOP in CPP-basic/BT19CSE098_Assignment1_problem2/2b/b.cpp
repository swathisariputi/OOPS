//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//array of string s[3]( same as 2a ) , setter and getter methods for data values of lib
#include<iostream>
#include<cstring>
using namespace std;
//defined struct lib with string str[3]
struct lib
{                       
    string s[3];   
};
//initialization of the data values of lib
void initialize(struct lib* l)
{
    int i;
    for (i=0;i<3;i++) 
    {
        l->s[i]='\0';
    }
}
//sets the data values of lib
void set_lib(struct lib* l)
{
    l->s[0]="swathi";
    l->s[1]="24469";
    l->s[2]="BT19CSE098";
}
//gets the data values of lib on terminal
void get_lib(struct lib* l)
{
    int i;
    cout<<"string values are"<<endl;
    for(i=0;i<3;i++)
    {
        cout << "s[" << i <<"] is " <<l->s[i]<<endl;
    }
}
int main()
{
    struct lib l;
    initialize(&l);
    set_lib(&l);
    get_lib(&l);  
}
