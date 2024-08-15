import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class string_task {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        StringBuilder ans=new StringBuilder(str.toLowerCase());
        List<Character> list=new ArrayList<>(Arrays.asList('a','e','y','i','o','u'));
        int i=0;
        while(i<ans.length())
        {
             char ch=ans.charAt(i);
             if(list.contains(ch))
             {
                ans.deleteCharAt(i);
             }
             else{
                ans.insert(i,'.');
                i+=2;
             } 
        }
        
        String b=new String(ans);
        System.out.println(b);

        

    }
    
}
