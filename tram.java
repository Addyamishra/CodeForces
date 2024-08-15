import java.util.Scanner;
public class tram {
public static void main(String[] args) {
  Scanner sc=new Scanner(System.in);
  int n=sc.nextInt();
  int[][] in_out=new int[n][2];
  for(int i=0;i<n;i++)
  {
    in_out[i][0]=sc.nextInt();
    in_out[i][1]=sc.nextInt();
  }
  int max=0;
  int curr=0;
  for(int i=0;i<n;i++)
  {
    curr-=(in_out[i][0]);
    curr+=(in_out[i][1]);
    max=Math.max(curr,max);
  }
  System.out.println(max);
}
  
}
