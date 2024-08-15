import java.util.Scanner;
public class soldier_and_banana {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int k=sc.nextInt();
        int n=sc.nextInt();
        int w=sc.nextInt();
        int total=0;
        for(int i=1;i<=w;i++)
        {
            total+=(k*i);
        }
        int borrow=total-n>0?total-n:0;
        System.out.println(borrow);
    }
}
