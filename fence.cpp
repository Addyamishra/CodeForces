#include <bits/stdc++.h>
using namespace std;
 
int main() {
       int n,k;
       cin>>n>>k;
       vector<int> arr(n,0);
       for(int i=0;i<n;i++)
       {
         cin>>arr[i];
       }
       int m=-1;
       long long min_sum=INT_MAX;
       for(int i=0;i<n;i++)
       {
              long long sum=0;
              for(int j=i;j<i+k;j++)
              {
                sum+=arr[j];
              }
              if(sum<min_sum) 
              {
                     m=i;
                     min_sum=sum;
              }
       }
          cout<<m+1;
       return 0;
}