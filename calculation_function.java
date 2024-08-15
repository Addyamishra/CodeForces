import java.math.BigInteger;
import java.util.Scanner;
public class calculation_function {
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      long a=sc.nextLong();
      if(a%2==0) System.out.println(a/2);
      else System.out.println(-(a+1)/2);   
    }
}
