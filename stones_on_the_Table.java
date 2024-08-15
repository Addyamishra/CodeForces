import java.util.Scanner;
public class stones_on_the_Table {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    String str=sc.next();
    int ans=0;
    for(int i=0;i<str.length()-1;i++)
     {
       if(str.charAt(i)==str.charAt(i+1)) ans++;
     }
 System.out.println(ans);
    }
    
}
