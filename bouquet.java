import java.util.*;
public class bouquet {
 public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int t=sc.nextInt();
       while(t>0){
              int n=sc.nextInt();
              int money=sc.nextInt();
              int arr[]=new int[n];
              for(int i=0;i<arr.length;i++){
                     arr[i]=sc.nextInt();
              }
              Arrays.sort(arr);
              int ans=0;
              int i=0;
              while(i<arr.length){
                  int now=arr[i];
                  int curr=i;
                  int nxt=i+1;
                  while(nxt<arr.length && arr[nxt-curr]<2){
                     curr++;
                     nxt++;
                  }
                  int amt=money;
                  int s=i+1;
                  while(s<=curr && amt>=arr[s]){
                     now+=arr[s];
                     amt-=arr[s];
                     s++;
                  }
                  ans=Math.max(ans,now); 
                  i=nxt;   
              }
              System.out.println(ans);
              t--;
       }
 }
}
