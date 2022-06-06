//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//DESCRIPTIN OF PROGRAM: implement 2 classes,each has a member function that takes a pointer toan object of the other class. 
//Creating instances of both object in main and call the aforementioned member function in each class
#ifndef CLASS1_H
#define CLASS1_H
//forward declaration
class class2;
//implement class1
class class1
{
	private :
		class1* ptr;      
		int a;
	public :
		class1();
		void function1(class2 *ptr);
		void seta(int);                     //setter and getter methods
		int geta();

};

#endif
