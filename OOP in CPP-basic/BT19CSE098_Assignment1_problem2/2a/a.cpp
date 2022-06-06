//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
// implement a struct Lib that contains 3 string object a, b, and c. 
// in main() create a Lib object x and assign x.a, x.b, and x.c. Print out the values. 
#include <iostream>
#include <cstring>

using namespace std;
//implement a struct Lib that contains 3 string object a, b, and c
struct Lib
{
	string a;
	string b;
	string c;
};
int main()
{
	Lib x;
	cout << "enter following details" << endl;                     //creating an object x for the structure Lib
	cout << " your name:" << endl;
	cin >> x.a;
	cout << "student id:" << endl;
	cin >> x.b;                                         //assign a,b,c values
	cout << "enrollment number:" << endl;
	cin >> x.c;
	//printing the values od x.a,x.b,x.c
	cout << "name: " << x.a << endl;
	cout << "student id : " << x.b << endl;
	cout << "enrollment number: " << x.c << endl;
	
}



