#include <bits/stdc++.h>
using namespace std;

int main() {
       int n,m;
       cin>>n>>m;
       vector<int> arr(n);
       for(int i=0;i<n;i++) cin>>arr[i];
       sort(arr.begin(),arr.end());
       long long ans=0;
       if(arr[0]>0) 
       {
              cout<<0;
              return 0;
       }
       for(int i:arr)
       {
              if(i<0 && m>0) ans+=(-i);
              else break;
              m--;
       }
       cout<<ans;
       return 0;
}