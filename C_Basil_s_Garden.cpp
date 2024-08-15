#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--)
       {
          int n;
          cin>>n;
          vector<int> nums(n,0);
          for(int i=0;i<n;i++)
          {
              cin>>nums[i];
          
          }
          int curr=0;
          for(int i=0;i<nums.size()-1;i++)
          {
              if(nums[i]>nums[i+1])
              {
                 curr+=(curr-nums[i])>0?curr-nums[i]:0;
              }
          }
          if(nums[n-1]>curr) curr=nums[n-1];
          cout<<curr<<endl;
       }
       return 0;
}