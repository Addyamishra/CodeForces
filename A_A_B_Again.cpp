#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
         int a;
         cin>>a;
         int ans=0;
         while(a>0){
              ans+=(a%10);
              a/=10;
         }
         cout<<ans<<endl;
       }
       return 0;
}