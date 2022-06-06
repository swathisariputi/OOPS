//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//DESCRIPTIN OF PROGRAM:regarding bank account(withdraw ,deposite and total balance)
#ifndef BANK_H
#define BANK_H
#include<cstring>
using namespace std;
//implement a class Bank
class Bank
{
	private:
		char name_depositor[60];     //private data members
		int account_num;
		char account_type[70];
		float balance;
		static int count;
	public :
		Bank(); //constructor
		Bank(int,char*,char*,float);  //parameterised constructor
		void deposit(void);                       //public member functions
		void withdraw(void);
		void display(void);
		static int getcount();
};
#endif

