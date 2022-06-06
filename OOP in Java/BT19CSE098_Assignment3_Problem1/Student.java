public abstract class Student extends Person{                 //abstract class Student derived from Person
    private double basic_fee;
    private double other_fee;   
    private int status;                                     //private data members
    public Student(String name,String address,String phonenum,String emailid,double basic_fee,double other_fee,int status){      //parameterized constructor
	super(name, address, phonenum, emailid);                       //invoking base-class(Person) constructor
	this.basic_fee=basic_fee;
	this.other_fee=other_fee;
	this.status=status;
    }
    public void set_basic_fee(int basic_fee){
	this.basic_fee=basic_fee;
    }
    public void set_other_fee(int other_fee){
	this.other_fee=other_fee;
    }
    public void set_status(String i){                           //setter methods
	if(i=="Freshman"){
	    this.status=1;
	}
	if(i=="Sophomore"){
	    this.status=2;
	}
	if(i=="Junior"){
	    this.status=3;
	}
	if(i=="Senior"){
	    this.status=4;
	}
    }
    public double get_fee(int x){                        //getter methods to access private data members
	double s=0;	
	if(x==1){
	    s=basic_fee;
	}
	if(x==2){
	    s=other_fee;
	}
	return s;
	}
    
    public int get_status(){
	return status;
    }
    public abstract double Calculate_fee();           //abstract member method
}