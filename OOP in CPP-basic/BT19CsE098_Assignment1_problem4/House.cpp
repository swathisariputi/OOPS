#include<iostream>
#include"house.h"
using namespace std;

void House :: display1()
{
    cout<<"class House"<<endl;  //displayed some statement in all classes
}
void House :: Wall :: display2()
{
    cout<<"nested Wall Class inside House class" << endl;
}
void House :: Wall :: Clock :: display3()
{
    cout<<"nested Clock class inside Wall class which is nested in House class" << endl;
}
