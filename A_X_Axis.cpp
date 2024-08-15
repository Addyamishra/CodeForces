#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--)
       {
              int a,b,c;
              cin>>a>>b>>c;
              int ans=INT_MAX;
              for(int i=0;i<=max(a,max(b,c));i++)
              {
                 ans=min(ans,abs(a-i)+abs(b-i)+abs(c-i));
              }
              cout<<ans<<endl;
       }
       return 0;
}