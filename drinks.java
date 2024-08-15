import java.util.Scanner;
public class drinks {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       double ans=0;
       for(int i=0;i<n;i++)
       {
        int j=sc.nextInt();
        ans+=j;
       }
       System.out.println(ans/n);

    }
    
}
