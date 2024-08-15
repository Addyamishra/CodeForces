#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--)
       {
            long long n,l,r;
            cin>>n>>l>>r;
            vector<long long> arr(n+1);
            arr[0]=0;
            for(int i=1;i<=n;i++) cin>>arr[i];
            int s=0;
            int e=0;
            for(int i=2;i<arr.size();i++)
            {
              arr[i]+=arr[i-1];
            }
           int ans=0;
            while(e<arr.size())
            {
              long long curr=arr[e]-arr[s];
              if(curr>l-1 && curr<r+1)
              {
                     ans++;
                     s=e;
              }
              else if(curr>r)
              {
                    while(s<e)
                    {
                     if(arr[e]-arr[s]>l-1 && arr[e]-arr[s]<r+1) ans++;
                     s++;
                    }
              }
              e++;
            }
            
          cout<<ans<<endl;
       }
       return 0;
}