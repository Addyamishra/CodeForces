import java.util.Scanner;
public class football {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    String str=sc.next();
    int start=0;
    int end=0;
    int ans=0;
    while(end<str.length()-1)
    {
        if(str.charAt(end)!=str.charAt(end+1))
        {
            ans=Math.max(ans,end-start+1);
           start=end+1;
        }
        end++;
    }
    ans=Math.max(ans,end-start+1);
    if(ans>=7) System.out.println("YES");
    else System.out.println("NO");
    
 }
    
}
