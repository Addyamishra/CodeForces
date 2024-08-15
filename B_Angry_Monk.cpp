#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
              int n,k;
              cin>>n>>k;
              vector<int> arr(k,0);
              for(int i=0;i<k;i++){
                     cin>>arr[i];
              }
              long long ans=0;
              sort(arr.begin(),arr.end());
              for(int i=0;i<arr.size()-1;i++){
                if(arr[i]==1) {
                     arr[arr.size()-1]++;
                     ans++;
                }
                else{
                     int frst=1;
                     int scnd=arr[i]-1;
                     arr[arr.size()-1]+=arr[i];
                     ans+=scnd*2+1;
                }
              }
              cout<<ans<<endl;

       }
       return 0;
}