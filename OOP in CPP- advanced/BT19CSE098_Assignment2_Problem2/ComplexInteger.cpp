#include "ComplexInteger.h"
#include<iostream>
using namespace std;
ComplexInteger :: ComplexInteger() //constructor initializes all values 
{
	real=0;          //data members intialized with 0
	img=0;
}
//setter methods for giving data for object
void ComplexInteger :: set_real(float x)
{
   real=x;	
}
void ComplexInteger :: set_img(float x)
{
   img=x;	
}
//getter methods for getting data of object
float ComplexInteger :: get_real()
{
	return real;
}
float ComplexInteger :: get_img()
{
	return img;
}
//operator overloading for performing arithmetic operations
ComplexInteger ComplexInteger :: operator+(ComplexInteger c1) 
{
	ComplexInteger c;
	c.real= this->real + c1.real;      //for adding two complex numbers
	c.img= this->img + c1.img;
	return c;
}
ComplexInteger ComplexInteger :: operator-(ComplexInteger x) 
{
	ComplexInteger c;
	c.real= this->real - x.real;      //subtracting two complex numbers
	c.img= this->img - x.img;
	return c;
}
ComplexInteger ComplexInteger :: operator*(ComplexInteger x) 
{
	ComplexInteger c;
	c.real= this->real*x.real-this->img*x.img;
	c.img= this->img*x.real+this->real*x.img;          //for multiplying two complex numbers
	return c;
}
ComplexInteger ComplexInteger :: operator/(ComplexInteger x) 
{
	ComplexInteger c;
	c.real= (float)(this->real*x.real+this->img*x.img)/(x.real*x.real+x.img*x.img);
	c.img= (float)(this->real*x.img-this->img*x.real)/(x.real*x.real+x.img*x.img); //for dividing
	return c;           
}
ComplexInteger ComplexInteger :: operator=(ComplexInteger x) 
{
	ComplexInteger c;
	c.real=this->real=x.real;        //assigning
	c.img=this->img=x.img;
	return c;
}
void ComplexInteger :: operator ^(ComplexInteger x) 
{
	real=real*real+img*img;          //for multiplying with its conjugate
	img=0;
}
void ComplexInteger :: operator ~() 
{
	float temp=real;
	real=img;                       //swapped real and imaginary values
	img=temp;
}
void display(ComplexInteger c)
{
	cout << c.real << "+" << c.img << "i" << endl;       //friend function for displaying complex number
}
ComplexInteger :: ComplexInteger(const ComplexInteger &x)   
{
	real=x.real;          //copyconstructor intializes object with another object
	img=x.img;
}
ComplexInteger :: ~ComplexInteger()
{
	//objects get deleted
}
