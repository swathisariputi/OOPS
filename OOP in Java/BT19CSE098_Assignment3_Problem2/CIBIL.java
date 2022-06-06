public class CIBIL extends Account{
    private double CIBIL;
   //parameterized constructor
    public CIBIL(String Account_no,double balance,double available_loan_limit,double outstanding_loan_amount,double [] amount_paid_monthly,int no_of_credit_applications,int no_of_times_accepted){
	super(Account_no,balance,available_loan_limit,outstanding_loan_amount,amount_paid_monthly,no_of_credit_applications,no_of_times_accepted); //invoke base class constructor
   
    }
    double [] arr=get_amount_paid();
    public int getcount(){ 
         int c=0;  
         for(int i=0;i<5;i++){
           if(arr[i]!=0){
                 c++;
           }
          }
	  return c;              //getting count of paid months
    }
   public double calculateCIBIL(){
        double credit_history=0.4*1000*getcount()/5;
        double credit_utilization=0.35*1000*get_A(3)/get_A(2);
        double credit_applications=0.25*1000*get_A2(2)/get_A2(1); 
	CIBIL = credit_history + credit_utilization + credit_applications;               //calculation of CIBIL
        return CIBIL;
    }                                      
    public boolean isEligible(){
        double a=this.calculateCIBIL();
	if(a<1000){
		System.out.println(CIBIL+"CIBIL score less than 1000");                         //printing if CIBIL score less than 1000
	}
 	boolean x;
        if(a>600){
          x=true;
        }
        else{
           x=false;
        }
       return x;                               //CIBIL >600 returning true else false
   }
   public void display(){
        boolean x=isEligible();
        System.out.println("Eligilibilty: "+x);              //displaying eligibility
 }
}

	
