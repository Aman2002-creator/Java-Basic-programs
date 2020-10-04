import java.util.Scanner;

public class P1d_number_format_exception {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Roll no.");
        String s = sc.next();
        try{
            int a = Integer.parseInt(s);
            System.out.println("19IT"+a);
        }catch(NumberFormatException e){
            System.out.println("Enter your roll no. in digits form only.");
        }
    }
}
