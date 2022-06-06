
#include<iostream>
#include"complex.h"
using namespace std;
void complex::get_data( )
{
	cout<<"Enter real part of complex number:"<<endl;
	cin>>real;
	cout<<"Enter complex part of complex number:"<<endl;    //getting complex numbers
	cin>>img;
}
void complex:: show()
{
    cout<<"Complex number is :"<<real<<"+"<<img<<"i"<<endl;      //printing entered complex numbers
}
void complex::sum(complex c1,complex c2)
{
	real=c1.real+c2.real;       //sum of their real parts
	img=c1.img+c2.img;         //sum of their imaginary parts
	cout<<"sum is :"<<real<<"+"<<img<<"i"<<endl;      //printing sum of complex numbers entered
}
//Complex contains three constructors
complex::complex()        //no parameter
{
	real=0;
	img=0;
}
complex::complex(int x)   //one parameter
{
	real=x;    
	img=x;
}
complex::complex(int x,int y)  //two parameters
{
	real=x;
	img=y;
} 

