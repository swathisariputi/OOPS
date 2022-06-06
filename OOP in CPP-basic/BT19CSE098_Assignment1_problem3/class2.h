#ifndef CLASS2_H
#define CLASS2_H
//declaration
class class1;
//implement class2
class class2
{
	public :
		class2();
		void function2(class1 *ptr);
		void setb(int);                      //setter and getter methods
		int getb();
	private :
		class2 *ptr;
		int b;
};
#endif

