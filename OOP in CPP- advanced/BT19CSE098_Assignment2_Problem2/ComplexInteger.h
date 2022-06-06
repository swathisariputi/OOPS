/*Name:Sariputi Naga Swathi
Enrollment number:BT19CSE098
Assignment number:2(Problem 2)
Date:26-03-2021
Description of problem:using operator overloading,perform some tasks like (+)add,(-)sub,etc for complex numbers 
on via class objects*/

#ifndef COMPLEXINTEGER_H
#define COMPLEXINTEGER_H
class ComplexInteger  //defination of class ComplexInteger
{
	private:
		float real;           //private data members
		float img;
	public:
		ComplexInteger();   //constructor
		void set_real(float x);
		void set_img(float x);           //setter method functions
		float get_real();
		float get_img();                //getter method functions
		friend void display(ComplexInteger c);  //friend function
		//operator overloading for performing few arithmetic operations
		ComplexInteger operator+(ComplexInteger);  //binary operator overloading
		ComplexInteger operator-(ComplexInteger); //binary operator overloading
		ComplexInteger operator*(ComplexInteger); //binary operator overloading
		ComplexInteger operator/(ComplexInteger); //binary operator overloading
		ComplexInteger operator=(ComplexInteger); //binary operator overloading
		void operator ^(ComplexInteger); //binary operator overloading
		void operator ~();  //unary operator overloading
		ComplexInteger(const ComplexInteger&);  //copy constructor
		~ComplexInteger(); //destructor
};
#endif

