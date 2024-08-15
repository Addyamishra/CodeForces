import java.util.Scanner;

public class sorting_twos {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int j=0;j<t;j++)
        {
            int n=sc.nextInt();
            int arr[]=new int[n+1];
            boolean bool=true;
            for(int i=0;i<n;i++) arr[i]=sc.nextInt();
            for(int i=n;i>=2;i--)
            {
              if(arr[i]<arr[i-1]) 
              {
                if(((i-1)&(i-2))!=0)
                {
                bool=false;
                break;
                }
              }
            }
            if(bool) System.out.println("YES");
           
           else System.out.println("NO");
        }
    }
}
