/*name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
define class with public, private and protected data members and function members and try to access all class members.
Reporting compiler messages got.*/
#ifndef CLASSA_H
#define CLASSA_H
class classA
{
	private:
		int x;
		void display1(); 
	public:
		classA(); //constructor
		int y;
		void display2();
		int getx(int );
		int getz(int );
	protected:
		int z;
		void display3();
};

#endif
