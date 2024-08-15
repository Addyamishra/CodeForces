import java.util.*;
public class presents {
       public static void main(String[] args) {
              Scanner sc=new Scannner(System.in);
              int n=sc.nextInt();
              Map<Integer,Intege> map=new HashMap<>();
              for(int i=1;i<=n;i++)
              {
                     int a=sc.nextInt();
                     map.put(a,i);
              }
              int ans[]=new int[n];
              for(int i:map.keySet())
              {
                     ans[map.get(i)]=i;
              }
              for(int i:ans)
             System.out.println(i+" ");
   

       }
}
