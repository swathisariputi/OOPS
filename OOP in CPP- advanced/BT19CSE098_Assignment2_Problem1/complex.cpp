#include "Complex.h"
#include<iostream>
#include<string>
#define size 50
using namespace std;
complex :: complex()          //constructor initializes all data members
{
	top=-1;
	A[0][0]=0;
	A[0][1]=0;
}
complex cmplx :: setcomplex(float p,float q,complex com)           //like push method
{
	com.top++;
	com.A[0][com.top]=p;
	com.A[1][com.top]=q;                           //elements are pushed to stack
	return com;
}
complex cmplx :: pop(complex com)
{
	com.top--;
	com.top--;                                 //poping top element
	return com;
}
cmplx cmplx :: operator+(complex com)             //binary operator overloading
{
	cmplx c1,c2,c3;
	c1.real=com.A[0][com.top];
	c1.img=com.A[1][com.top];                   
	c2.real=com.A[0][com.top-1];       
	c2.img=com.A[1][com.top-1];
	c3.real= c1.real+c2.real;
	c3.img= c1.img+c2.img;                //for adding two complex numbers
	return c3;
}
cmplx cmplx :: operator-(complex com)
{
	cmplx c1,c2,c3;
	c1.real=com.A[0][com.top];
	c1.img=com.A[1][com.top];
	c2.real=com.A[0][com.top-1];
	c2.img=com.A[1][com.top-1];
	c3.real= c1.real-c2.real; 
	c3.img= c1.img-c2.img;                //subtracting two complex numbers
	return c3;
}
cmplx cmplx :: operator*(complex com)
{
	cmplx c1,c2,c3;
	c1.real=com.A[0][com.top];
	c1.img=com.A[1][com.top];
	c2.real=com.A[0][com.top-1];
	c2.img=com.A[1][com.top-1];
	c3.real=c1.real*c2.real-c1.img*c2.img;
	c3.img=c1.real*c2.img+c2.real*c1.img; 
	return c3;                                    //for multiplying two complex numbers
}
cmplx cmplx :: operator/(complex com)
{
	cmplx c1,c2,c3;
	c1.real=com.A[0][com.top];
	c1.img=com.A[1][com.top];
	c2.real=com.A[0][com.top-1];
	c2.img=com.A[1][com.top-1];
	if(c2.real==0 || c2.img==0)
	{
		cout<<"\ndivison is not possible for this case(undefined)"<<endl;
		c3.real=0;
		c3.img=0;
	}
	else
	{
		c3.real=(float)(c1.real*c2.real+c1.img*c2.img)/(c2.real*c2.real+c2.img*c2.img);
		c3.img=(float)(c1.real*c2.img-c1.img*c2.real)/(c2.real*c2.real+c2.img*c2.img);
	}
	return c3;                   //for dividing
}
void cmplx::display(complex com)
{
	cout<<"\n"<<com.A[0][com.top]<<"+ "<<com.A[1][com.top] <<"i";  
}                       //display function to display output

