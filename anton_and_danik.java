import java.util.Scanner;
public class anton_and_danik {
    public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
        
         int n=sc.nextInt();
         String str=sc.next();
         int A=0;
         int D=0;
         for(char ch:str.toCharArray())
         {
            if(ch=='A') A++;
            else D++;
         }
         String ans=A>D?"Anton":(A!=D)?"Danik":"Friendship";
         System.out.println(ans);
    }
}
