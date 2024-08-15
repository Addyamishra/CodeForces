
#include<iostream>
#include<vector>
#include<map>
#include<utility>
using namespace std;

int get(long long salary,long long curr_amt,long long ind,vector<long long> arr,vector<long long> arr2,vector<vector<long long>> &dp,long long total,vector<vector<long long>> &sp){

  if(ind==arr.size()-1) return (arr[ind]<=curr_amt)?arr2[ind]:0;
  if(dp[curr_amt][ind]!=-1 && sp[curr_amt][ind]>=total) return dp[curr_amt][ind];
  long long cost=arr[ind];
  long long val=arr2[ind];
  long long take=0;
  long long not_take=0;
   not_take=get(salary,curr_amt+salary,ind+1,arr,arr2,dp,total,sp);
  if(curr_amt>=cost)
  {
      take=val+get(salary,curr_amt+salary-cost,ind+1,arr,arr2,dp,total+val,sp);
  }
  sp[curr_amt][ind]=total;
  return dp[curr_amt][ind]=max(take,not_take);
}
int main() {
 long long  s;
 cin>>s;
 long long  cost;
 for(long long  i=0;i<s;i++)
 {
       long long  months,salary;
       cin>>months>>salary;
       vector<long long> arr;
       vector<long long> arr2;
       for(long long  i=0;i<months;i++)
       {
          long long  a,b;
          cin>>arr[i]>>arr2[i];
          cost+=a;
          
       }
       long long  ans=0;
       vector<vector<long long >> sp(cost+1,vector<long long>(months));
       vector<vector<long long >> dp(cost+1,vector<long long >(months,-1));

       ans+=get(salary,0,0,arr,arr2,dp,0,sp);
       cout<<ans<<endl;
 }
 return 0;
}
