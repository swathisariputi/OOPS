This folder contains 8 java files
1.Person.java:
--------------
 	Here I defined a class Person which has name, address, phoneNo and emailId as data members and setter
        and getter methods.

2.Student.java:
---------------
	Here an abstract class Student which is subclass of Person class is defined.The Student class has basic_fee, other_fee and status as data members and abstract method calculateFee().
	“status” data member takes values as Freshman, Sophomore, Junior, Senior(if the student is in 1st year, 2nd year, 3rd year and 4th year of graduation respectively).

3.Sponsored.java:
-----------------
	Here Sponsored class is(sub class) derived from Student class(super class).
	Calculate_fee() method returns total fee of sponsored student and display() method displays all details of sponsored student.

4.NonSponsored.java:
--------------------
	Here NonSponsored class is(sub class) derived from Student class(super class).
	Calculate_fee() method returns total fee of non sponsored student and display() method displays all details of non sponsored student.

5.Employee.java:
------------------
	Here an abstract class Employee which is subclass of Person class is defined.
	The Employee class has 2 abstract methods calculateIncrement() and calculatePromotedLevel().	

6.Faculty.java:
----------------
	Here Faculty class is(sub class) derived from Employee class(super class).
	This class have Salary, level, working_hours as data members.
	calculateIncrement() method returns salary incremented,calculatePromotedLevel returns promoted level of faculty and display method displays all details of faculty.

	
7.Staff.java:
----------------
	Here Staff class is(sub class) derived from Employee class(super class).
	This class have Salary, level, working_hours as data members.
	calculateIncrement() method returns salary incremented,calculatePromotedLevel returns promoted level of Staff and display method displays all details of Staff.

8.Program.java:
------------
	Here I defined a class Program which contains main method.
        In main method, user gives input and appropriate class is Instantiated and called display function to display details.

**COMPILED IN UBUNTU**