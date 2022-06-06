//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//DESCRIPTIN OF PROGRAM:Implemented two member function called print()
#ifndef MESSAGE_H
#define MESSAGE_H

#include<string>

using namespace std;
// implement a Message class
class Message  
{
    private:
        string a;   //created a private member string
    public:
        Message(string s = "BT19CSE098"  ); //constructor
        void print();  //takes no argument and simply print the message stored in the object
        void print(string s); //takes a string argument, which it prints in addition to the internal message
        //overloaded functions
};

#endif
