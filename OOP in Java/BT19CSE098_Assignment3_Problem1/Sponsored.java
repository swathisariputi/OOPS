public class Sponsored extends Student{   //Sponsored class derived from Student class
    private double total_fee;       //private data member
    public Sponsored(String name,String address,String phonenum,String emailid,double basic_fee,double other_fee,int status){    //parameterized construtor
	super(name,address,phonenum,emailid,basic_fee,other_fee,status);         //invoking base class constructor
    }
    public double Calculate_fee(){
	total_fee=get_fee(1)+ get_status()*get_fee(2);      //total fee calculation
	return total_fee;
    }                   
    public void display(){                        //display method to display detials 
	double fee=Calculate_fee();
        System.out.println("\t\t\t-------------------");
	System.out.println("\t\t\t||STUDENT DETAILS||");
	System.out.println("\t\t\t-------------------");
	System.out.println("Name: "+get_person(1)+"\nAddress: "+get_person(2)+"\nPhone No: "+get_person(3)+"\nEmailId: "+get_person(4)+"\nBasic Fee: "+get_fee(1)+"\nOther Fee: "+get_fee(2)+"\nTotal Fee: "+fee);
     }
}