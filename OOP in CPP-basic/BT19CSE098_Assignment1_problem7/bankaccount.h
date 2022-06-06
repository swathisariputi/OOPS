//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//DESCRIPTIN OF PROGRAM: loging into bankaccount and do needed action like withdraw,deposite,request balance and then quit
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<string>
#include<iostream>
#include<utility>
using namespace std;
//implement class bankaccount
class bankaccount
{
   private:
	pair <int,string> A;
	int balance;    //data members
   public:
   	class S
	{
		void print();
	};
	bankaccount();     //constructor
	void login();
	void action();
	void withdraw();       //member functions
	void deposit();
	void request_balance();

};


#endif
