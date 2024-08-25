#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
         int n,k;
         cin>>n>>k;
         string str;
         cin>>str;
         map<char,int> cont;
         for(auto& ch:str){
          cont[ch]++;
         }
         int odd=0;
         for(auto& a:cont){
               odd+=(a.second&1);
              
         }
         bool ans=(odd-k>1)?false:true;
         
         if(ans) cout<<"YES"<<endl;
         else cout<<"NO "<<endl;
         
       }
       return 0;
}