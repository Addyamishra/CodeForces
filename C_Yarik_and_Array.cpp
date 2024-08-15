#include <bits/stdc++.h>
using namespace std;
int main() {
       int t;
       cin>>t;
       while(t--){
         int n;
         cin>>n;
         vector<int> arr(n);
         vector<int> pref(n+1);
         int ans=0;
         for(int i=0;i<arr.size();i++){
              cin>>arr[i];
              ans=max(ans,arr[i]);
              pref[i+1]=arr[i];
         }
         for(int i=1;i<n+1;i++)  pref[i]+=pref[i-1];
       }
       return 0;
}