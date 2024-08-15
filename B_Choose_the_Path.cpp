#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
         int n,m;
         cin>>n>>m;
         int b=min(n,m)*2+(max(n,m)-2);
         int sum=max(n,m)*(max(n,m)+1)/2+(b*(b+1)/2);
         cout<<sum<<endl;
       }
       return 0;
}