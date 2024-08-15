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
         string str;
         cin>>str;
         int ans=0;
         int s=0;
         int e=n-1;
         int l=0;
         int r=0;

         while(s<=e){
              if(str[s]=='L' && str[e]=='R'){
                     for(int i=s;i<=e;i++) ans+=arr[i];
                     s++;
                     e--;
              }
              else if(arr[s]!='L') {
                     s++;
              }
              else if(arr[e]!='R'){
                      e--;
              }
         }
         cout<<ans<<endl;
       }

       return 0;
}