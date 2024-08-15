import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
public class beautiful_year {
    public static boolean check(int  a)
    {
        Set<Integer> set=new HashSet<>();
        while(a!=0)
        {
          set.add(a%10);
          a/=10;
        }
        
        return set.size()==4?true:false;
        
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        a++;
        while(!check(a)) a++;
         
       System.out.println(a);
    }
}
