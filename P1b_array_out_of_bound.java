import java.util.Scanner;

public class P1b_array_out_of_bound {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int [] b = new int[n];
        int x;
        x=sc.nextInt();
        try{
            b[8]=x;
            System.out.println(b[8]);

        }catch( ArrayIndexOutOfBoundsException e){
            System.out.println("Oh No!! Array out of bound");
        }
    }
}
