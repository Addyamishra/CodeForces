#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
              int n,k;
              cin>>n>>k;
              int ans;
              int div=k-1;
              if((n-1)%(k-1)==0) ans=(n-1)/(k-1);
              else ans=(n-1)/(k-1)+1;
              if(n%(k-1)==0) ans=min(ans,n/div);
              else ans=min(ans,n/div+1);
              cout<<ans<<endl;
       }
       return 0;
}