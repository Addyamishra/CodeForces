import java.util.Scanner;
public class petya_and_Strings {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        String t=sc.next();
        String str1=s.toLowerCase();
        String str2=t.toLowerCase();
        for(int i=0;i<s.length();i++)
        {
            if(str1.charAt(i)!=str2.charAt(i))
            {
                int ans=(int)str1.charAt(i)>(int)str2.charAt(i)?1:-1;
                System.out.println(ans);
                break;
            }
            else if(i==s.length()-1)
            {
                System.out.println(0);
                break;
            }
        }
    }
}
