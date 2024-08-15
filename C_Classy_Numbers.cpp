#include <bits/stdc++.h>
using namespace std;
long long get(string str,int ind,int non,bool small,map<string,int> dp){
       if(non>3) return 0;
       if(ind==str.length()) return 1;
       string s = to_string(ind) + " " + to_string(non) + " " + to_string(small);     
         if(dp.find(s)!=dp.end()) return dp[s];
       int res=get(str,ind+1,non,small?small:(str[ind]!='0'),dp);
       if(small){
              res+=9*get(str,ind+1,non+1,true,dp);
       }
       else{
              int left=str[ind]-'0'-1;
              if(left>0) res+=left*get(str,ind+1,non+1,true,dp);
              if(str[ind]!='0') res+=get(str,ind+1,non+1,false,dp);
       }
       dp[s]=res;
       return res;
}
int main() {
       int t;
       cin>>t;
       while(t--){
              long long s,e;
              cin>>s>>e;
               map<string,int> dp;
              int ans1=get(to_string(e),0,0,false,dp);
              dp.clear();
              int ans2=get(to_string(s-1),0,0,false,dp);
              cout<<ans1-ans2<<endl;
       }
       return 0;
}