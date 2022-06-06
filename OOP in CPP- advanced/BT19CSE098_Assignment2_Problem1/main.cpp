#include "Complex.h"
#include<iostream>
#include<string>
#define size 50
int main()
{
	complex stack_ans;                        //object creation
	string s; 
	cmplx c,x;                               //object creation
	cout<<"NOTE:Enter complex numbers with single digit real part and imaginary part only\n";
	cout<<"For double digits enter in the form of summation of two single digit complex numbers\n";
	cout << "Enter postfix expression: ";
	cin>>s;
	int i=0;
	//first pushing values to stack and operations done based on priority of operator
	while(s[i]!='\0')
	{
		if(s[i]>='0' && s[i]<='9')
		{
			stack_ans=c.setcomplex(s[i]-48,s[i+1]-48,stack_ans);
			i=i+2;
		}
		else if( s[i]==')' || s[i]=='(')
		{
		    i++;
		}
		else if(s[i]=='+')
		{
			x=x+stack_ans;
			stack_ans=c.pop(stack_ans);
			stack_ans=c.setcomplex(x.real,x.img,stack_ans);
			i++;
		}
		else if(s[i]=='-')
		{
			x=x-stack_ans;
			stack_ans=c.pop(stack_ans);
			stack_ans=c.setcomplex(x.real,x.img,stack_ans);
			i++;
		}
		else if(s[i]=='*')
		{
			x=x*stack_ans;
			stack_ans=c.pop(stack_ans);
			stack_ans=c.setcomplex(x.real,x.img,stack_ans);
			i++;
		}
		else if(s[i]=='/')
		{
			x=x/stack_ans;
			stack_ans=c.pop(stack_ans);
			stack_ans=c.setcomplex(x.real,x.img,stack_ans);
			i++;
		}
		else
		{
		    i++;
		}
	}
	c.display(stack_ans);             //display function to display final answer
	return 0;
}

