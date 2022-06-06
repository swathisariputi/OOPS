/*Name:Sariputi Naga Swathi
Enrollment number:BT19CSE098
Assignment number:3(Problem 1)
Date:29-03-2021
Description of Problem: Instantiate the derived classes of subclass of person class and display the details.         
*/
import java.util.Scanner;                        //importing scanner class
public class Program{
    public static void main(String[] args) {       //main method
	Scanner sc=new Scanner(System.in);
	String n,a,p,e;
	System.out.print("Enter student or employee name(without spaces): ");
	n=sc.next();
	System.out.print("Enter address(without spaces): ");
	a=sc.next();
	System.out.print("Enter phone number: ");
	p=sc.next();
	System.out.print("Enter email id: ");                                   //input given by user
	e=sc.next();
	int i;
	do{
		System.out.println("\nEnter 1 for getting student details");
		System.out.println("Enter 2 for getting employee details");       //student or employee is said by user
		System.out.println("Enter 3 for exit");
		i=sc.nextInt();
                if(i==1)
		{
			System.out.println("Enter basic fee and other fee:");           
			double bf=sc.nextDouble(); 
			double of=sc.nextDouble();
			System.out.print("Enter student status: ");                     //if student get student details from user
 			int s=sc.nextInt(); 
			System.out.println("\nEnter 1 if student is sponsored student");
			System.out.println("Enter 2 if student is nonsponsored student");     //asking whether student is sponsored or not       
			int j=sc.nextInt();
			if(j==1){
				Sponsored student=new Sponsored(n,a,p,e,bf,of,s);         //if sponsored instantiate the sponsored class
				student.display();                                   //displays details                                                
			}
			else if(j==2){
				NonSponsored student=new NonSponsored(n,a,p,e,bf,of,s);        //if not sponsored instantiate the nonsponsored class
				student.display();                                 //displays details 
			}
			else{
				System.out.println("Enter valid number");
			}
		}
		if(i==2)
		{
			System.out.println("Enter salary,level and working hours");
			double s=sc.nextDouble();
			int l=sc.nextInt();
			int w=sc.nextInt();                           //if employee, get employee details from user
			System.out.println("Enter 1 if employee is faculty"); 
			System.out.println("Enter 2 if employee is staff");                    //asking whether employee is faculty or staff
			int j=sc.nextInt();
		        if(j==1){
				Faculty employe=new Faculty(n,a,p,e,s,l,w);            //if faculty instantiate the Faculty class
				employe.display();                                     //call to display method displays details 
			}
			else if(j==2){
				Staff employe=new Staff(n,a,p,e,s,l,w);                  //if staff instantiate the Staff class
				employe.display();                                      //call to display method displays details                        
			}  
			else{
				System.out.println("Enter valid number");
			}			
		}
	}while(i!=3);        
	   return;
  }
}