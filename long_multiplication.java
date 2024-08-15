import java.util.*;
import java.math.BigInteger;

public class long_multiplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            BigInteger p = sc.nextBigInteger();
            BigInteger q = sc.nextBigInteger();
            Stack<Integer> st1 = new Stack<>();
            Stack<Integer> st2 = new Stack<>();
            
            // Extract digits of p and q and push them into stacks
            while (!p.equals(BigInteger.ZERO)) {
                st1.push(p.mod(BigInteger.TEN).intValue());
                p = p.divide(BigInteger.TEN);
            }
            while (!q.equals(BigInteger.ZERO)) {
                st2.push(q.mod(BigInteger.TEN).intValue());
                q = q.divide(BigInteger.TEN);
            }
            
            // Initialize BigIntegers for storing final numbers
            BigInteger frst = BigInteger.ZERO;
            BigInteger scnd = BigInteger.ZERO;
            
            // Process remaining digits
            while (!st1.isEmpty()) {
                frst = frst.multiply(BigInteger.TEN).add(BigInteger.valueOf(st1.pop()));
            }
            while (!st2.isEmpty()) {
                scnd = scnd.multiply(BigInteger.TEN).add(BigInteger.valueOf(st2.pop()));
            }

            // Reverse the digits in scnd
            scnd = reverseBigInteger(scnd);

            // Find the product and update frst and scnd accordingly
            BigInteger num1 = frst.multiply(scnd).mod(BigInteger.valueOf(1000000007));
            BigInteger num2 = frst.multiply(scnd).mod(BigInteger.valueOf(1000000007));

            if (num1.compareTo(num2) > 0) {
                System.out.println(num1);
                System.out.println(num2);
            } else {
                System.out.println(num2);
                System.out.println(num1);
            }
        }
    }

    // Function to reverse the digits in a BigInteger
    private static BigInteger reverseBigInteger(BigInteger n) {
        return new BigInteger(new StringBuilder(n.toString()).reverse().toString());
    }
}
