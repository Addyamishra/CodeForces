import java.util.Scanner;
public class elephant {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int mod=x%5;
        int extra=(mod==0?0:1);
        System.out.println((x-mod)/5+extra);
    }
}
