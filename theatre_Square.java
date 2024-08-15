import java.util.Scanner;
public class theatre_Square {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
         long n=sc.nextInt();
        long m=sc.nextInt();
         long a=sc.nextInt();
         long ans=0;
        ans+=Math.ceil(1.0*n/a)*Math.ceil(1.0*m/a);
        System.out.println(ans);
    }
}
