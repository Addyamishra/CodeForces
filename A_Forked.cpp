#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
          int a,b,x,y,x1,y1;
          cin>>a>>b>>x>>y>>x1>>y1;
          vector<pair<int,int>> temp ={{a,-b},{-a,b},{-a,-b},{a,b},{b,a},{-b,a},{b,-a},{-b,-a}};
          set<pair<int,int>> frst,scnd;
          for(pair<int,int> p:temp){
            int l=x+p.first;
            int r=y+p.second;
            frst.insert({l,r});
            l=x1+p.first;
            r=y1+p.second;
            scnd.insert({l,r});
          }
       int ans=0;
       for(auto& p:frst){
         if(scnd.find(p)!=scnd.end()) ans++;
       }   
       cout<<ans<<endl;
      

       }
       return 0;
}