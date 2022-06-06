#include "ComplexInteger.h"
#include<iostream>
using namespace std;
int main()
{
	ComplexInteger c1,c2,c3;
	float p,q,r,s;
	cout << "Enter real part and imaginary part of complex number 1: "<<endl;
	cin>>p;  //getting first complex number from user
	cin>>q;
	cout << "Enter real part and imaginary part of complex number 2: "<<endl;
	cin>>r;  //getting second complex number from user
	cin>>s;
	c1.set_real(p);    //settor methods calling
	c1.set_img(q);
	c2.set_real(r);
	c2.set_img(s);
	ComplexInteger temp1=c1,temp2=c2;      //assigned complex numbers to some temporary variables 
	float x=c1.get_real(),y=c1.get_img(),i=c2.get_real(),j=c2.get_img(); //getter methods calling
	cout << "enter complex numbers:" << endl;
	cout << x << "+" << y << "i" << endl;
	cout << i << "+" << j << "i" << endl;
	int a,b;
	do           
	{
		cout<<"enter 1 for adding complex numbers"<<endl;      //asking user which task to perform
		cout<<"enter 2 for subtracting complex numbers"<<endl;
		cout<<"enter 3 for multiplying complex numbers"<<endl;
		cout<<"enter 4 for dividing complex numbers"<<endl;
		cout<<"enter 5 for assigning a complex number to another complex number"<<endl;
		cout<<"enter 6 for swapping real and img values in a complex number"<<endl;
		cout<<"enter 7 for multiplying complex number with its conjugate"<<endl;
		cout<<"enter 8 for exit"<<endl;
		cin >> a;
		if(a==1)
		{
			c3=c1+c2;                   //call to operator +
			cout<<"sum is:" << endl;  
			display(c3);
		}
		if(a==2)
		{
			c3=c1-c2;                    //call to operator -
			cout<<"sub is:" << endl;
			display(c3);
		}
		if(a==3)
		{
			c3=c1*c2;                     //call to operator *   
			cout<<"mul is:" << endl;
			display(c3);
		}
		if(a==4)
		{
			c3=c1/c2;                       //call to operator /
			display(c3);
		}
		if(a==5)
		{                                   //call to operator =
			c3=c1;
			display(c3);
		}
		if(a==6)
		{
			cout<<"which complex number u want to perform given task?(1 or 2)"<<endl;
			cin>>b;                
			if(b==1)
			{
				~c1;                      //call to operator ~
				display(c1);
				c1=temp1;
			}
			else if(b==2)
			{
				~c2;                       //call to operator ~   
				display(c2);
				c2=temp2;
			}
			else
			{
				cout<<"You have entered invalid number.You shoud enter 0 or 1"<<endl;
			}
		}
		if(a==7)
		{
			cout<<"which complex number u want to perform given task?(1 or 2)"<<endl;
			cin>>b;
			if(b==1)
			{
				c1^c1;                   //call to operator ^
				display(c1);
				c1=temp1;
			}
			else if(b==2)
			{
				c2^c2;                   //call to operator ^
				display(c2);
				c2=temp2;
			}
			else
			{
				cout<<"You have entered invalid number.You shoud enter 0 or 1"<<endl;
			}	
		}
	}while(a!=8);
	    return 0;
}


