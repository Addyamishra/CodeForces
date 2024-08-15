import java.util.*;
public class max_sum {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            
            int size=sc.nextInt();
            int  a=sc.nextInt();
            int sum=0;
            int arr_sum=0;
            for(int k=0;k<size;k++)
            {
                int b=sc.nextInt();
                if(b>0) sum+=b;
                arr_sum+=b;
            }
            if(sum==0) System.out.println();
            int prev=sum;
            int curr=0;
            for(int l=0;l<a;l++) 
            {
                curr+=(sum*2)%10e9+7;
                prev=curr;
            }
            System.out.println((arr_sum+curr)%10e9+7);
        }
    }
}
