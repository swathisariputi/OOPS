//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//DESCRIPTIN OF PROGRAM: entering two complex numbers using real and imaginary parts and printing those two complex numbers and their sum
#ifndef COMPLEX_H
#define COMPLEX_H
// implement a class complex
class complex
{
   private:
	int real;  //private data members real 
	int img;  //and imaginary
   public:                            
	void get_data( );  
	void show();
	void sum(complex c1,complex c2);	//public member functions
	complex(); //constructor
	complex(int); //parameterized constryction  
	complex(int,int);
};
#endif
