import java.util.Scanner;
public class translation {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        String t=sc.next();
        boolean flag=true;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)!=t.charAt(t.length()-i-1)){
                flag=false;
                break;
            }
        }
        if(flag) System.out.println("YES");
        else System.out.println("NO");
        
       

    }
}
