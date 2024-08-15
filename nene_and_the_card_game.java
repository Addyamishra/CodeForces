import java.util.*;
public class nene_and_the_card_game {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            int num=sc.nextInt();
            Set<Integer> set=new HashSet<>();
            int ans=0;
            for(int j=0;j<num;j++)
            {
                int a=sc.nextInt();
             if(!set.isEmpty() && set.contains(a)) 
             {
                ans++;
                set.remove(a);
             } 
             set.add(a);
            }
            System.out.println(ans);
        }
    }
}
