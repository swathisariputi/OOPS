#include<iostream>
#include<string>
#include"message.h"

using namespace std;

Message :: Message(string s )
{
    a = s;
}
void Message::print()
{
    cout<< a << endl;  //print the message stored in the object
}
void Message::print(string s)
{
    cout << a << s << endl;  // prints another message(s) in addition to the internal message
}
