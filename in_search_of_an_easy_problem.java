import java.util.Scanner;
public class in_search_of_an_easy_problem {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        boolean flag=true;
        for(int i=0;i<n;i++)
        {
            int t=sc.nextInt();
            if(t==1)
            {
              flag=!flag;
              break;  
            }
        }
            if(flag) System.out.println("EASY");
            else System.out.println("HARD");
    }
}
