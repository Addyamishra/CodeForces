import java.util.*;
public class ingenuity {
       static String ans="NO";
       static void get(int ind,int len,String dir,String make,int r1,int c1,int r2,int c2)
       {
              if(ind==len)
              {
                     if(r1==r2 && c1==c2) ans=make;
                     return;
              }
              char next=dir.charAt(ind);
              int r=next=='N' || next=='S' ?0:next=='E'?1:-1;
              int c=next=='E' || next=='W' ?0:next=='N'?1:-1;
              make=make+

       }
       public static void main(String[] args) {
           Scanner sc=new Scanner(System.in);
           int s=sc.nextInt();
           for(int i=0;i<s;i++)
           {
              int len=sc.nextInt();
              String dir=sc.next();
              String yo="";
              get(0,len,dir,yo,0,0,0,0);
              System.out.println(ans);

           }

       }
}
