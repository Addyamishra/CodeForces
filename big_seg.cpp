#include <bits/stdc++.h>
using namespace std;

int main() {
       int n;
       cin>>n;
       int mi=INT_MAX;
       int ma=INT_MIN;
       vector<vector<int>> arr(n,vector<int>(2,-1));
       for(int i=0;i<n;i++)
       {
              cin>>arr[i][0]>>arr[i][1];
              mi=min(mi,arr[i][0]);
              ma=max(ma,arr[i][1]);
       }
        for(int i=0;i<n;i++)
       {
              if(arr[i][0]==mi && arr[i][1]==ma) 
              {
                     cout<<i+1;
                     return 0;
              }
       }
       cout<<-1;

       return 0;
}