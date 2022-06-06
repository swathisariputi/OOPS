#include<iostream>
#include"house.h"
using namespace std;
int main()
{
    //creating object
    House H;
    House::Wall W;
    House::Wall::Clock C;
    H.display1();
    W.display2();
    C.display3();             //calling member functions
    return 0;
}
