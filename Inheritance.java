import java.util.Scanner;
//Inheritance , this keyword and super ...all used in This program.
class Company{
    String Cname;
    public Company(String Cname)
    {
        this.Cname=Cname;
    }
}
class subCompany extends Company {
    String Cname;
    public subCompany(String Cname1,String Cname2)
    {
        super(Cname1);
        this.Cname=Cname2;
    }
    public void Cdetail(){
        System.out.println("The main Company name is: "+super.Cname+" and Sub Comapny name is: "+this.Cname);
    }
}
public class Inheritance {
    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter the company and sub company name:-");
//        String a=sc.next();
//        String b=sc.next();
        subCompany S1 = new subCompany("BBK", "Oneplus");
        S1.Cdetail();
    }
}

