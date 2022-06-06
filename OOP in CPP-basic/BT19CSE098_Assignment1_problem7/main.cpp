#include<iostream>
#include<string>
#include"bankaccount.h"
using namespace std;
int main()
{
	bankaccount B; //creating object
	B.login();
	bankaccount :: S w;
	w.print();
	return 0;
}

