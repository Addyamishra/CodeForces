#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       for(int i=0;i<t;i++)
       {
         int n;
         cin>>n;
         int ans=0;
         for(int i=n-1;i>=1;i--)
         {
             n=n&i;
             ans++;
             if(n==0) break;
         }
         cout<<ans<<endl;
       }
       return 0;
}