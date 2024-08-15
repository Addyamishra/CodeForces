import java.util.Scanner;
public class young_Physicist {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        boolean flag=true;
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
            arr[j]+=sc.nextInt();
            if(i==n-1 && arr[j]!=0) flag=false;
        }
         }
         if(flag) System.out.println("YES");
         else System.out.println("NO");

    }
}
