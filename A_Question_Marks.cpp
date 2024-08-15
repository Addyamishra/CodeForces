#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
         int a;
         string str;
         cin>>a>>str;
         int n=str.length()/4;
         map<char,int> st;
         for(auto& ch:str){
       if(ch=='?') continue;
           st[ch]++;
         }
         int ans=0;
         for(auto &pair:st){
              if(pair.second>=n) ans+=n;
              else if(pair.second<n) ans+=pair.second;
         }
         cout<<ans<<endl;
       }
       return 0;
}