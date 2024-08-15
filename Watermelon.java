import java.util.Scanner;

public class Watermelon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int w = sc.nextInt();
        boolean flag = false;
        for (int i = 2; i < w; i += 2) {
            int x = w - i;
            if (x % 2 == 0) {
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            System.out.println("YES");
        else
            System.out.println("NO");
    
    }
}
