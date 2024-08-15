import java.util.Scanner;
public class word {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        int c=0;
        for(char ch:str.toCharArray())
        {
            if((int)ch>=65 &&(int)ch<=90) c++;
        }
        String ans="";
        if(str.length()-c>=c) ans=str.toLowerCase();
        else ans=str.toUpperCase();
        System.out.println(ans);

    }
}
