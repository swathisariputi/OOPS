/*Name:Sariputi Naga Swathi
Enrollment number:BT19CSE098
Assignment number:3(Problem 2)
Date:29-03-2021
Short Description of Problem: Inheritance and arrays concept
*/
import java.util.*;   //importing util package
public class Program{
	public static void main(String [] args){
             Scanner sc=new Scanner(System.in);              
             System.out.println("Enter Account number: ");
             String a=sc.next();
             System.out.println("Enter balance,available_loan_limit,outstanding_loan_amount:");
             double b=sc.nextDouble();
             double all=sc.nextDouble();
             double ola=sc.nextDouble();
             System.out.println("Enter amount paid monthly from past 5 months:");
	     double [] arr=new double[5];
             for(int i=0;i<5;i++){
		arr[i]=sc.nextDouble();
	     }
             System.out.println("Enter no_of_credit_applications,no_of_times_accepted");                  //getting input from user
             int nca=sc.nextInt();
             int nta=sc.nextInt();
	     CIBIL c=new CIBIL(a,b,all,ola,arr,nca,nta);                 //instantiate the CIBIL class
	
             c.display();                         //member methods calling
          }
}
                    
 
