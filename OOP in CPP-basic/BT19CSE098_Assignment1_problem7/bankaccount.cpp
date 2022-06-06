#include<iostream>
#include<string>
#include"bankaccount.h"
#include<utility>
using namespace std;
bankaccount :: bankaccount()
{
	A.first=98;
	A.second="swathi";       //entering login details
	balance=25000;
}

void bankaccount::S::print()
{
	cout << "hello world" << endl;
}
void bankaccount :: login()
{
    int login_ID;
    string Password;
    cout<<"enter login ID"<<endl;
	cin>>login_ID;
	cout<<"enter Password"<<endl;                           
	cin>>Password;
	if(A.first==login_ID && A.second==Password)
	{
		action();                                          //if login details entered are correct then go for action required
	}
	else
	{
		cout<<"wrong details entered"<<endl<<"please enter correct details to login"<<endl;              //else return
		login();
	}
}
void bankaccount::action()
{
	int action;
	cout<<"press 1 for Wihdraw money"<<endl;
	cout<<"press 2 for deposit money"<<endl;
	cout<<"press 3 for requesting balance"<<endl;
	cout<<"press 4 for logout"<<endl;
	cin>>action;
	switch(action)
	{
		case 1:                                             //using switch
			withdraw();
			break;                                          //go to required action
		case 2:                                                    
			deposit();
			break;
		case 3:
			request_balance();
			break;
		case 4:
			return;
			break;
	}
}
void bankaccount::withdraw()
{
	cout<<"enter money you want to withdraw"<<endl;
	int withdraw_money;
	cin>>withdraw_money;
	if(withdraw_money>balance)                                                                            //withdraw of money and print balance
	{
		cout<<"available balance is less"<<endl;             //if withdrawal money is more than balance we can withdraw
	}
	else
	{                                                                             //else withdraw and show new balance
		balance=balance-withdraw_money; 
		cout<<"withdrawn succesfully"<<endl;                           
		cout<<"current available balance is"<<balance<<endl;
	}
}
void bankaccount::deposit()
{
	cout<<"enter money needed to deposit"<<endl;              //deposting 
	int dep_money;
	cin>>dep_money;
	balance=balance+dep_money;                                               //balance will get incresed and it is balance+deposited money
	cout<<"deposited succesfully"<<endl;                      //print new balance
	cout<<"current available balance is"<<balance<<endl;
}
void bankaccount::request_balance()
{
	cout<<"available balance:"<<balance<<endl;                  //print balance
}

