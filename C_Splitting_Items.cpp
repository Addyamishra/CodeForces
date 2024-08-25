#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
              int n,k;
              cin>>n>>k;
              vector<int> arr(n);
              for(int i=0;i<n;i++) cin>>arr[i];
              sort(arr.begin(),arr.end());
              int a=0;
              int b=0;
              bool f=true;
              for(int i=n-1;i>=0;i--){
                     if(!f) 
                     {
                       if(arr[i+1]-arr[i]>k) arr[i]+=k;
                       else arr[i]=arr[i+1];     
                     }
                     f=!f;
              }
              f=true;
              for(int i=n-1;i>=0;i--){
                     if(f) a+=arr[i];
                     else b+=arr[i];
                     f=!f;
              }
              
              int ans=a-b;
              cout<<ans<<endl;
              }
       return 0;
}