import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
public class helpful_maths {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        List<Integer> list=new ArrayList<>();
        for(int i=0;i<str.length();i+=2)
        {
           list.add((int)str.charAt(i)-48);
        }
        Collections.sort(list);
        String ans="";
        for(int i=0;i<list.size();i++)
        {
            ans+=Integer.toString(list.get(i))+'+';
        }
        System.out.println(ans.substring(0,ans.length()-1));
    }
}
