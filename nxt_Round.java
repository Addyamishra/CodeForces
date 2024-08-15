import java.util.Scanner;
public class nxt_Round{
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int k=sc.nextInt();
    int val=0;
  int []arr=new int[n];
  for(int i=0;i<n;i++) 
  {
    arr[i]=sc.nextInt();
    if(i==k-1) val=arr[i];
  }
  int j=0;
  int ans=0;
  for(;j<n;j++) if(arr[j]>=val  && arr[j]!=0) ans++;

  System.out.println(ans);

}

}