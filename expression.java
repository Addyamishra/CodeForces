import java.util.Scanner;
public class expression {
    public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int a=sc.nextInt();
         int b=sc.nextInt();
         int c=sc.nextInt();
         int ans=Math.max(a+b+c,Math.max((a+b)*c,Math.max(a*(b+c),Math.max(a+b+c,a*b*c))));
         System.out.println(ans);

    }
}
