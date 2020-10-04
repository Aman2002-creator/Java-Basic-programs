package user_define_exception;

import java.util.Scanner;

public class P2_user_define_exception {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String Id=sc.next();
        try {
            if (Id.length() < 3)
                throw new StringIndexOutOfBoundsException("Please Enter min 3 digit");
        }catch(StringIndexOutOfBoundsException e){
            System.out.println(e);
        }
    }
}
