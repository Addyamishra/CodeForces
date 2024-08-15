#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
              int n;
              cin>>n;
              vector<int> arr(n,0);
              for(int i=0;i<n;i++){
                     cin>>arr[i];
              }
              int m=0;
              sort(arr.begin(),arr.end());
              bool flag=true;
              for(int i=n-1;i>=0;i--){
                if(arr[i]<m) break;
                else{
                     flag=!flag;
                     m=arr[i];
                }
              }
       if(flag) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
       }
       return 0;
}