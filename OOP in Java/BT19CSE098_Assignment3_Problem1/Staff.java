public class Staff extends Employee{         //class Staff derived from Employee
    double salary;
    int level;
    int working_hours;
    double Increment;                       //private data members
    public Staff(String name,String address,String phonenum,String emailid,double salary,int level,int working_hours){  //parameterized constructor
	super(name,address,phonenum,emailid);      //invoked base class constructor
	this.salary=salary;
	this.level=level;
	this.working_hours=working_hours;           
    }
    public double calculateIncrement(){
	Increment=1.10*salary;          //increment calculation
	return Increment;
    }
    public int calculatePromotedLevel(){
	int x;
	if(working_hours>500){
	    x=level+1;
	}                                    //level calculation
	else{
	    x=level;
	}
	return x;
    }
    public void display(){          //display method displays employee details
	double x=calculateIncrement();
	int y=calculatePromotedLevel();
        System.out.println("\t\t\t--------------------");
	System.out.println("\t\t\t||EMPLOYEE DETAILS||");
	System.out.println("\t\t\t--------------------");
	System.out.println("Name: "+get_person(1)+"\nAddress: "+get_person(2)+"\nPhone No: "+get_person(3)+"\nEmailId: "+get_person(4)+"\nSalary: "+this.salary+"\nlevel: "+this.level+"\nWorkinhg Hours: "+this.working_hours+"\nSalary Incremented: "+x+"\nLevel promoted: "+y);
}
}
