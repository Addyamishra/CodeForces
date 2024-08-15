import java.util.Scanner;
public class magnets {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String prev="";
        int ans=0;
        for(int i=0;i<n;i++)
        {
            String temp=sc.next();
            if(!prev.equals(temp)) ans++;
            prev=temp;
        }
      System.out.println(ans);
    }
}
