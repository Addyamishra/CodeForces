#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
              int n;
              cin>>n;
              vector<int> arr(n);
              for(int i=0;i<n;i++) cin>>arr[i];
              bool ans=true;
              sort(arr.begin(),arr.end());
              vector<int> temp(n);
              for(int i=0;i<n;i++){
                   int t=i-1>=0?abs(arr[i-1]-arr[i]):INT_MAX;
                   int l=i+1<n?abs(arr[i+1]-arr[i]):INT_MAX;
                   temp[i]=min(t,l);
              }
              int curr=temp[0];
              for(int i:temp) if(i!=curr) ans=false;
              for(int i=0;i<n-1;i++) {
                     if(arr[i+1]==arr[i]+1) ans=false;
              }
              if(ans)  cout<<"YES"<<endl;
              else cout<<"NO" << endl;
       }
       return 0;
}