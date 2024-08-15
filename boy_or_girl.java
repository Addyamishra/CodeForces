import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
public class boy_or_girl {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        Set<Character> set=new HashSet<>();
        for(char ch:str.toCharArray()) set.add(ch);
        if(set.size()%2!=0) System.out.println("IGNORE HIM!");
        else System.out.println("CHAT WITH HER!");
    }
}
