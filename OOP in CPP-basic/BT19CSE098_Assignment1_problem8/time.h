//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//DESCRIPTIN OF PROGRAM: adding two times given in hour minute second format
#ifndef TIME_h
#define TIME_h
//implement class time
class time
{
    private:
    int hour;              //private data members hour minute second
    int minute;
    int second;
    public:  
    time();  //default constructor
    time(int hr,int min,int sec); //constructor with default parameters
    // set functions
    int set_hour();
    int set_minute();                     //public member functions
    int set_second();
    void display();
    time sum(time);
};
#endif 

