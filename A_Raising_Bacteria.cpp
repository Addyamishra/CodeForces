#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(unsigned int n) {
    return n && !(n & (n - 1));
}
int main() {
       long long n;
       cin>>n;
       long long ans=__builtin_popcount(n);

          cout<<ans<<endl;
        
       return 0;
}