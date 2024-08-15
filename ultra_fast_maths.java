import java.util.*;
public class ultra_fast_maths {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        String frst=Integer.toString(a);
        String scnd=Integer.toString(b);
        while(frst.length()!=scnd.length())
        {
          if(frst.length()>scnd.length()) scnd='0'+scnd;
          if(frst.length()<scnd.length()) frst='0'+frst;
        }
        String str="";
        for(int i=0;i<frst.length();i++)
        {
          char ch = '1';
          if(frst.charAt(i)==scnd.charAt(i)) ch='0';
          str+=ch;
        }
        System.out.println(str);
    }
}
