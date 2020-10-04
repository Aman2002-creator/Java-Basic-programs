import java.util.Scanner;

public class P1e_str_index_out_of_bound {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        try{
            char c=s.charAt(7);
            System.out.println(c);
        }catch(StringIndexOutOfBoundsException e){
            System.out.println(e);
        }
    }
}
