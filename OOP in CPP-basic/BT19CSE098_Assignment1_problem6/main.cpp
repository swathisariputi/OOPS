
#include<iostream>
#include<cstring>
#include "BANK.h"
using namespace std;
int main()
{
	//declaration
    int acc_no;
    char nm[60], acc_type[70];
    float bal;
    cout<<"\n Accout No. ";
    cin>>acc_no;
    cout<<"\n Name : ";
    cin>>nm;
    cout<<"\n Account Type : ";
    cin>>acc_type;
    cout<<"\n Balance : ";
    cin>>bal;
    Bank b1(acc_no, nm, acc_type, bal);  //object is created
    b1.deposit(); 
	b1.withdraw();
    b1.display(); //   calling member functions.
    cout << "number of bank accounts open till date is " << Bank::getcount() << endl;
	return 0;
}

