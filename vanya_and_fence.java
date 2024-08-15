import java.util.Scanner;
public class vanya_and_fence {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int h=sc.nextInt();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int nxt=sc.nextInt();
            if(nxt>h) ans+=2;
            else ans++;
        }
        System.out.println(ans);
    }
}
