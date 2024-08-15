import java.util.Scanner;
public class word_Capitalization {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        char[] arr=str.toCharArray();
        arr[0]=Character.toUpperCase(arr[0]);
        
        System.out.println(new String(arr));


    }
}
