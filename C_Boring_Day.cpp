#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--)
       {
            long long n,l,r;
            cin>>n>>l>>r;
            vector<long long> arr(n);
            for(int i=0;i<n;i++) cin>>arr[i];
            long long ans=0;
            long long sum=0;
            int j=0;
            for(int i=0;i<n;i++)
            {
              sum+=arr[i];
              if(sum<l) continue;
              if(sum<=r)
              {
                     ans++;
                     j=i+1;
                     sum=0;
              }
              while(sum>r && j<=i)
              {
                     sum-=arr[j];
                     j++;
              }
              if(sum>=l) 
              {
                     ans++;
                     sum=0;
                     j=i+1;
              }
            }
            cout<<ans<<endl;
            
       }
            
        
       
       return 0;
}