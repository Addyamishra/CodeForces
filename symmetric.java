import java.util.*;
public class symmetric{
       public static void main(String[] args) {
              Scanner sc=new Scanner(System.in);
              int n=sc.nextInt();
              for(int i=0;i<n;i++)
              {
                     int s=sc.nextInt();
                     String str=sc.next();
                     List<Integer> list=new ArrayList<>();
                     for(char ch:str.toCharArray())
                     {
                            if(!list.contains((int)ch)) list.add((int)ch);
                     }
                     Collections.sort(list);
                     Map<Character,Character> map=new HashMap<>();
                     int a=0;
                     int b=list.size()-1;
                     while(a<=b)
                     {
                            char frst=(char)((int)list.get(a));
                            char scnd=(char)((int)list.get(b));
                            map.put(frst,scnd);
                            map.put(scnd,frst);
                            a++;
                            b--;
                     }
                     StringBuilder ans=new StringBuilder();
                     for(char ch:str.toCharArray())
                     {
                            char c=map.get(ch);
                            ans.append(c);
                     }

                     String t=new String(ans);
                     System.out.println(t);
              }
       }
}