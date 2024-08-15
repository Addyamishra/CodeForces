#include <bits/stdc++.h>
using namespace std;

int main() {
       int n;
       cin>>n;
       while(n--)
       {
              int tar,k;
              cin>>tar>>k;
              int ans=1+(tar-1)*k;
              cout<<ans<<endl;
       }
       return 0;
}