import java.util.Scanner;
public class lucky_div {
 public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    boolean flag=false;
    if(n%4==0 || n%7==0) System.out.println("YES");
    else{
        while(n!=0) 
    {
        if(n%10==4 || n%10==7) 
        {
            n/=10;
            continue;
        }
        else {
            flag=true;
            break;
        }

    }
    if(flag) System.out.println("NO");
    else System.out.println("YES");
}
 }   
}
