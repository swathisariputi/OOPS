#include <iostream>
#include "time.h"
using namespace std;
//intialize class private members to zero
time :: time( )
{
    hour=0;
    minute=0;
    second=0;
}
time :: time(int hr,int min, int sec)
{
    hour=0;
    minute=0;
    second=0;
}
int time ::set_hour()
{
    cout<<"enter hour: ";
    cin>>hour;
    hour=(hour>=0 && hour<24)?hour:0;    //entering hour
    return hour;
}
int time::set_minute()
{
    cout<<"enter minute: ";
    cin>>minute;
    minute=(minute>=0 && minute<60)?minute:0;           //minutes
    return minute;
}
int time::set_second()
{
    cout<<"enter second: ";                                 //seconds
    cin>>second;
    second=(second>=0 && second<60)?second:0;
    return second;
}
class time time :: sum(time t2)
{
    time temp;
    temp.second = second + t2.second;                   //code for summation of two times
    temp.minute = minute + t2.minute;
    temp.hour = hour + t2.hour;

    //implement mechanism to convert time in proper format
    if(temp.second >= 60)                              // after adding seconds if second>60
	{
        temp.minute += temp.second / 60;                // minute=minute + second/60 since after 60 seconds we enter into new minute
        temp.second = temp.second % 60;                 //and second becomes second%60
    } 
    if(temp.minute >= 60)
	{
        temp.hour += temp.minute / 60;              //similar to that of seconds after 60 minutes we enter into new hour
        temp.minute = temp.minute % 60;                //hence hour=hour+minute/60 minute=minute%60
    }
    return temp;
}
void time :: display()
{
    cout<<"hour:minute:second = "<<hour<<":"<<minute<<":"<<second;       //printing time
}

