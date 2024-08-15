#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
              int n;
              cin>>n;
              vector<int> arr(n,0);
              for(int i=0;i<n;i++) cin>>arr[i];
              vector<int> ans(n,0);
              int ind=0;
              for(int i=n-1;i>=0;i-=2){
                   ans[ind++]=arr[i];
              }
               for(int i=n-2;i>=0;i-=2){
                   ans[ind++]=arr[i];
              }
              for(int i: ans){
                     cout<<i<<" ";
              }
              cout<<endl;
       }
       return 0;
}