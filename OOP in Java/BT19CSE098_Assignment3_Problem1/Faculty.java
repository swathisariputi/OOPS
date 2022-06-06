public class Faculty extends Employee{     //class Faculty derived from Employee
    private double salary;
    private int level;
    private int working_hours;
    private double Increment;            //private data members
    public Faculty(String name,String address,String phonenum,String emailid,double salary,int level,int working_hours){     //parameterized constructor
	super(name,address,phonenum,emailid);      //invoked base class constructor
	this.salary=salary;
	this.level=level;
	this.working_hours=working_hours;
    }
    public double calculateIncrement(){
	Increment=1.25*salary;                //increment calculation
	return Increment;
    }
    public int calculatePromotedLevel(){
	int x;
	if(working_hours>1000){
	    x=level+1;                           //level calculation
	}
	else{
	    x=level;
	}
	return x;
    }
    public void display(){                        //display method displays employee details
	double x=calculateIncrement();
	int y=calculatePromotedLevel();
        System.out.println("\t\t\t--------------------");
	System.out.println("\t\t\t||EMPLOYEE DETAILS||");
	System.out.println("\t\t\t--------------------");
	System.out.println("Name: "+get_person(1)+"\nAddress: "+get_person(2)+"\nPhone No: "+get_person(3)+"\nEmailId: "+get_person(4)+"\nSlary: "+this.salary+"\nlevel: "+this.level+"\nWorkinhg Hours: "+this.working_hours+"\nSalary Incremented: "+x+"\nLevel promoted: "+y);
 }
}
