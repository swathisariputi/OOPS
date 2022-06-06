import java.util.Arrays;    //importing Arrays class
public class Account{
    private String Account_no;
    private double balance,available_loan_limit,outstanding_loan_amount;
    private double [] amount_paid_monthly;
    private int no_of_credit_applications,no_of_times_accepted;          //private data members
    Account(String Account_no,double balance,double available_loan_limit,double outstanding_loan_amount,double [] amount_paid_monthly,int no_of_credit_applications,int no_of_times_accepted){
	this.Account_no=Account_no;
	this.balance=balance;
	this.available_loan_limit=available_loan_limit;
	this.outstanding_loan_amount=outstanding_loan_amount;
	this.amount_paid_monthly=amount_paid_monthly;
 	this.no_of_credit_applications=no_of_credit_applications;
	this.no_of_times_accepted=no_of_times_accepted;
        }                       //constructor
    public double get_A(int x){
	double i=0;
	if(x==1){
		i=balance;
	}
	if(x==2){
		i=available_loan_limit;
	}
	if(x==3){
		i=outstanding_loan_amount;
	}
	return i;
    }                       
    public String get_a_no(){
         return Account_no;
    }
    public double [] get_amount_paid(){
         return amount_paid_monthly;
    }
    public int get_A2(int x){
	  int i=0;
	if(x==1){
		i=no_of_credit_applications;
	}
	if(x==2){
		i=no_of_times_accepted;
	}
        return i;	 
    }                            //getter methods

}