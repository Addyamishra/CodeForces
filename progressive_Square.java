import java.util.*;
public class progressive_Square {
    public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         for(int k=0;k<n;k++)
         {
             int a=sc.nextInt();
             int c=sc.nextInt();
             int d=sc.nextInt();
             List<Integer> list=new ArrayList<>();

             int arr[][]=new int[a][a];
            for(int i=0;i<a;i++)
            {
                for(int j=0;j<a;j++)
                {
                    arr[i][j]=sc.nextInt();
                    if(arr[i][j]<a) list.add(arr[i][j]);
                }
            }
            // check for progressive progressive_Squar\
            boolean f=false;
            for(int s=0;s<list.size();s++)
        {
            int p=list.get(s);
             for(int l=0;l<a;l++)
            {
                for(int m=0;m<a;m++)
                {
                  if(l+1<a && m+1<a && arr[l+p][m]==arr[l][m]+c && arr[l][m+p] == arr[l][m]+d) 
                  {
                    f=true;
                    break;
                  }
                }
            }
        }
            if(f) System.out.println("YES");
            else System.out.println("NO");
         }
    }
    
}
