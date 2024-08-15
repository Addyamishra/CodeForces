#include <bits/stdc++.h>
using namespace std;

long long max_quadratic_value(long long a, long long b, long long c, long long n) {
    // Calculate values at endpoints
    long long f_0 = c; // f(0) = c
    long long f_n = a * n * n + b * n + c; // f(n) = an^2 + bn + c

    // Calculate vertex x-coordinate
    double x_vertex = -static_cast<double>(b) / (2.0 * static_cast<double>(a));
    
    // Calculate f(x_vertex) if x_vertex is within [0, n]
    long long f_xv = LLONG_MIN; // Initialize with smallest possible long long value
    if (x_vertex >= 0 && x_vertex <= n) {
        f_xv = a * pow(x_vertex, 2) + b * x_vertex + c;
    }

    // Determine the maximum value among f(0), f(n), and f(x_vertex)
    long long max_value = max({f_0, f_n, f_xv});

    return max_value;
}
int main() {
       int t;
       cin>>t;
       for(int i=0;i<t;i++)
       {
              long long n,a,b;
              cin>>n>>a>>b;
              
              long long ans=max_quadratic_value(-1,(2*b-2*a+1),2*a*n,min(n,b))/2;
       
             
              cout<<ans<<endl;
       }
       return 0;
}