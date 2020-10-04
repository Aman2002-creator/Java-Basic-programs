
import java.util.Scanner;

public class P1a_null_pt_exception {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String a = null;

        try{
            System.out.println(a.length());

        }catch (NullPointerException e){
            System.out.println(e);
        }
        System.out.println("Done");
    }
}
