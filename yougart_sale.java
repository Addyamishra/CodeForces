import java.util.*;
public class yougart_sale {
     public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=sc.nextInt();
            int a=sc.nextInt();
            int b=sc.nextInt();
            b=Math.min(b,a*2);
            if(n%2==0) System.out.println(b*n/2);
            else System.out.println((b*(n/2))+a);

        }

     }
}
