import java.util.Scanner;

public class P1c_arithmetic_exception {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x,y,b;
        x=sc.nextInt();
        y=sc.nextInt();
        try{
            b=(x+y)/(x-y);
            System.out.println(b);

        }catch( ArithmeticException e){
            System.out.println("Denominator can't be 0.");
        }
    }
}
