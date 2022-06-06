//name:sariputi naga swathi,enrollment number:BT19CSE098,ASSIGNMENT NUMBER:1,DATE:03-02-2021
//DESCRIPTIN OF PROGRAM:nested classes and call display() function for each class
#ifndef HOUSE_H
#define HOUSE_H
//implement a House class
class House
{
    public:
        class Wall //nest a Wall class inside House class
		{
            public:
                class Clock //nest a Clock class inside Wall class
				{
                    public:    
                    void display3();
                };
            void display2(); 
        };
    void display1();            //calling display() function for each class
};
#endif
