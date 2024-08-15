import java.util.*;

public class squaring {
    
    // Function to calculate power of 2 for a given number
    static int powof(int x) {
        int exponent = (int) (Math.log(x) / Math.log(2));
        return (int) Math.pow(2, exponent);
    }
    
    // Function to find the closest greater power of 2 than a given number
    static int cl(int x) {
        // If x is already a power of 2, return x
        if ((x & (x - 1)) == 0) {
            return x;
        }
        
        // Find the next power of 2 greater than x
        int powerOf2 = 1;
        while (powerOf2 < x) {
            powerOf2 <<= 1;
        }
        
        return powerOf2;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); // Number of test cases
        
        while (t > 0) {
            int n = sc.nextInt(); // Size of the array
            int[] arr = new int[n];
            
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt(); // Input array elements
            }
            
            int ans = 0;
            for (int i = 1; i < n; i++) {
                if (arr[i - 1] > arr[i]) {
                    // Calculate m = ceil(log2(arr[i-1] - arr[i]))
                    int m = (int) Math.ceil(Math.log(arr[i - 1] - arr[i]) / Math.log(2));
                    
                    // Find closest greater power of 2 than m
                    int a = cl(m);
                    
                    // Update arr[i] to arr[i]^a
                    arr[i] = (int) Math.pow(arr[i], a);
                    
                    // Add 2^a to ans
                    ans += powof(a)+1;
                }
            }
            
            System.out.println(ans); // Output the result for the current test case
            t--;
        }
        
        sc.close(); // Close the scanner
    }
}
