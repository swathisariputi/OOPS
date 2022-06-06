public class Person{                       //Person class
    private String name;
    private String address;
    private String phonenum;
    private String emailid;                  //private data members
    public Person(String n,String a,String p,String e){       //parameterized constructor
	this.name=n;
	this.address=a;
	this.phonenum=p;
        this.emailid=e;
    }                                       //constructor intiliazes all data members
    public void set_person(String n,String a,String p,String e){
        this.name=n;
        this.address=a;
	this.phonenum=p;
	this.emailid=e;
    }                                  //setter method to set data member values
    public String get_person(int x){
	String s=null;	
	if(x==1){
	    s=name;
	}
	if(x==2){
	    s=address;
	}
	if(x==3){
	    s=phonenum;
	}
	if(x==4){
	    s=emailid;
	}
	return s;
    }                          //getter method to get data members values
}


