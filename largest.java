import java.util.Stack;
import java.util.*;
class largest {
      static int prev[];
      static int prec[];
      static  void prev(int nums[])
       {
         Stack<Integer> st=new Stack<>();
         for(int i=0;i<nums.length;i++)
         {
           while( !st.isEmpty() && nums[st.peek()]>=nums[i]) st.pop();
           if(!st.isEmpty()) prev[i]=st.peek();
           else prev[i]=-1;
           st.push(i);  
         }
     
       }
       static void prec(int nums[])
       {
         Stack<Integer> stack=new Stack<>();
         for(int i=nums.length-1;i>=0;i--)
         { 
           while( !stack.isEmpty() && nums[stack.peek()]>=nums[i]) stack.pop();
           if(!stack.isEmpty()) prec[i]=stack.peek();
           else prec[i]=nums.length;
           stack.push(i);  
         }
       }
         public static int largest(int[] arr) {
           int n=arr.length;
             prev=new int[n];
             prec=new int[n];
             prev(arr);
             prec(arr);
             int max=0;
             for(int i=0;i<arr.length;i++)

             {
               max=Math.max(max,(prec[i]-prev[i]-1)*arr[i]);
             }
             return max;
     
         }
         public static void main(String[] args) {
             int arr[]={2,4};
             System.out.println(largest(arr));
         }
     }