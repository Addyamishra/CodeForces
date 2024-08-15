import java.util.Scanner;
public class even_odds {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
       long n=sc.nextLong();
       long k=sc.nextLong();
       long odd_till=n/2+1;
        if(n%2==0) odd_till=n/2;
        long ans=0;
        if(k>odd_till)
        {
         k=k-odd_till;
         ans=2+(k-1)*2;
        }
        else{
         ans=1+(k-1)*2;
        }
        System.out.println(ans);
    }
}
 