import java.util.*;
public class diagonals{
       public static void main(String[] args) {
              Scanner sc=new Scanner(System.in);
              int t=sc.nextInt();
              while(t>0){
                   
                     int n=sc.nextInt();
                     int k=sc.nextInt();
                     int ans=0;
                     int a=0;
                     while(n>0){
                       if(a==0){
                       if(k-n>=0){
                            ans++;
                            k-=n;
                            n--;
                       }
                       a++;
                       }
                       else{
                            if(k-n>=0){
                                   ans++;
                                   k-=n;
                                   if(k-n>=0) {
                                          ans++;
                                          k-=n;
                                   }
                              } 
                              n--;
                       }
                     }
                System.out.println(ans);
                      t--;
              }

       }
}