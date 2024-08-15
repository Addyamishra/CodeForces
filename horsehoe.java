import java.util.*;

public class horsehoe {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int ans=0;
        List<Integer> list=new ArrayList<>();
        for(int i=0;i<4;i++) 
        {
            int a=sc.nextInt();
            if(list.contains(a)) ans++;
            else list.add(a);
        }
        System.out.println(ans);
    }
    
}
