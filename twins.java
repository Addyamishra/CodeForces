import java.util.Arrays;
import java.util.Scanner;
public class twins {
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++) arr[i]=sc.nextInt();
        Arrays.sort(arr);
        int pref[]=new int[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            pref[i]=sum;
        }
        int coins=0;
        int total=0;
        for(int i=arr.length-1;i>=0;i--)
        {
            total+=arr[i];
            coins++;
            if(i-1>=0 && total>pref[i-1]) break;
        }
        System.out.println(coins);
    }
    
}
