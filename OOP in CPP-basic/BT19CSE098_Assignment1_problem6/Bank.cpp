#include<iostream>
#include "BANK.h"
#include<cstring>
using namespace std;
int Bank::count = 0;
Bank::Bank(int acc_no,char *nm,char *acc_type,float bal)              //initialising variables
{ 
	account_num = acc_no;
	strcpy(name_depositor,nm);
	strcpy(account_type,acc_type);
	balance = bal;
	count++;  
}
void Bank::deposit()                                  //member function for amount deposition
{
	int deposite_amount;                                      //balance will get incresed and it is balance+deposited money
	cout<<"Enter the deposit amount :\n";
	cin>>deposite_amount;
	balance+=deposite_amount;
} 

void Bank::withdraw()                                //member function for amount withdraw
{
	int withdraw_amount;
	cout<<"Enter the withdraw amount :\n";
	cin>>withdraw_amount;
	if(withdraw_amount < balance)
	{
		balance-=withdraw_amount;                            //withdraw of money and print balance
	}
	else                                               //if withdrawal money is more than balance we can withdraw
	{
		cout<<"available balance is less\n";
	}
}

void Bank::display() 
{
	cout<<"*****************************\n";
	cout<<"Name :"<<name_depositor<<endl;                          //printing all details after all actions done
	cout<<"Account number :"<<account_num<<endl;
	cout<<"Account Type :"<<account_type<<endl;
	cout<<"Balance :"<<balance<<endl;
}
int Bank :: getcount()
{
	return count;
}
