public abstract class Employee extends Person{         //abstract class Employee derived from Person
    public Employee(String name,String address,String phonenum,String emailid){    //parameterized constructor
		super(name, address, phonenum, emailid);    //invoke base class constructor
    }
    public abstract double calculateIncrement();
    public abstract int calculatePromotedLevel();        //abstract member methods
}
