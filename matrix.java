import java.util.Scanner;
public class matrix{

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int r=-1,c=-1;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
            int a=sc.nextInt();
            if(a==1) 
            {
                r=i;
                c=j;
                break;
            }
            }
        }
        System.out.println(Math.abs(2-r)+Math.abs(2-c));
    }
}