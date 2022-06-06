/*Name:Sariputi Naga Swathi
Enrollment number:BT19CSE098
Assignment number:2(Problem 2)
Date:26-03-2021
Description of problem: evaluating a given postfix expression using stack and operator overloading
*/
#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include<string>
#define size 50
using namespace std;
class cmplx;          //forward declaration
class complex
{
	private:               
	    int top;
	    int A[2][size];       //private data members
	public:
	    complex();
	    friend class cmplx;	        //friendclass
};
class cmplx
{
	public:
		float real;
		float img;                   
	public:
		cmplxint()
		{
			real=0;
			img=0;
		}
		complex setcomplex(float p,float q,complex com);     
		complex pop(complex com);                                 //member functions
		cmplx operator+(complex com);
		cmplx operator-(complex com);
		cmplx operator*(complex com);               //operator overloading
		cmplx operator/(complex com);
		void display(complex com);
		friend class complex;		                 //friend class
};
#endif

