#include <iostream>
#include "time.h"
using namespace std;
int main()
{
    class time t1,t2,t3; //object is created 
    t1.set_hour();      //member functions calling
    t1.set_minute();
    t1.set_second();
    t2.set_hour();
    t2.set_minute();
    t2.set_second();
    t3=t1.sum(t2);
    t3.display();
}

