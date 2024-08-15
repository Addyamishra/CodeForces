import java.util.*;
public class money_buys_happiness {
       public static void main(String[] args) {
              Scanner sc=new Scanner(System.in);
              int a=sc.nextInt();
              for(int i=0;i<a;i++)
              {
                int months=sc.nextInt();
                int salary=sc.nextInt();
                int curr=0;
                int happiness=0;
                for(int j=0;j<months;j++)
                {
                   int cost=sc.nextInt();
                   int amt=sc.nextInt();
                   if(curr>=cost) 
                   {
                     happiness+=amt;
                     curr-=cost;
                   }
                   curr+=salary;
                }
                System.out.println(happiness);
              }

       }
}
