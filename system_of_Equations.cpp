 #include <bits/stdc++.h>
using namespace std;

int main() {
       int n,m;
       cin>>n>>m;
       int target=m+n;
       long long ans=0;
       for(int a=0;a*<=n;a++)
       {
              for(int b=0;b<=m;b++)
              {
                if((b*b + a*a + a + b)==target) ans++;
              }
       }
       cout<<ans;
       return 0;
}