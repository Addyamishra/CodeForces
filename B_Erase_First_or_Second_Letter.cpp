#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
         int n;
         cin>>n;
         string str;
         cin>>str;
         int ans=0;
         set<char> cont;
         for(int i=0;i<str.length();i++){
              if(cont.find(str[i])==cont.end()){
                     ans+=(n-i);
              }
              cont.insert(str[i]);
         }
        cout<<ans<<endl;

         }
       
       return 0;
}