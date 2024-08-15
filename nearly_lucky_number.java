import java.math.BigInteger;
import java.util.Scanner;
public class nearly_lucky_number {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
         BigInteger n=sc.nextBigInteger();
         String str=BigInteger.toString(n);
        if(lucky==7 || lucky==4) System.out.println("YES");
        else System.out.println("NO");
    }
    
}
