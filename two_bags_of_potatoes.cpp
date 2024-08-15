#include <bits/stdc++.h>
using namespace std;

int main() {
       long long  y,k,n;
       cin>>y>>k>>n;
       if(n<=y)
       {
              cout<<-1;
              return 0;
       }
       int st=(y>k)?1:k-y;
       for(long long i=st;i<=n-y;i++)
       {
         if((i+y)%k==0) {
              cout<<i<<" ";
         }
       }
       return 0;
}