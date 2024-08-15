import java.util.Scanner;
public class Way_Too_Long_Words{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            String str=sc.next();
            if(str.length()<=10) System.out.println(str);
            else{
            //   String ans=str.charAt(0)+Integer.toString((str.length()-2))+str.charAt(str.length()-1)
              System.out.println(str.charAt(0)+Integer.toString((str.length()-2))+str.charAt(str.length()-1));
            }
        }

    }
}