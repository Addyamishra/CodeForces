import java.util.Scanner;

public class chat_root {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        String tar="hello";
        int ptr=0;
        for(char ch:s.toCharArray())
        {
         if(ptr<tar.length() && tar.charAt(ptr)==ch) ptr++;
        }
        if(ptr==5) System.out.println("YES");
        else System.out.println("NO");
    }
}
