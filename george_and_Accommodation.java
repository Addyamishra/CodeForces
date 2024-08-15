import java.util.Scanner;
public class george_and_Accommodation {
     public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int p=sc.nextInt();
            int q=sc.nextInt();
            ans+=q-p>=2?1:0;
        }
        System.out.println(ans);
     }
}
