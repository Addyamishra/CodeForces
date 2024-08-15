#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       vector<string> arr(t);
        map<string,int> st;
       for(int i=0;i<t;i++){
              cin>>arr[i];
              st[arr[i]]++;
       }
       int target=t/2;
       string ans="uh-oh";
       for (const auto& pair : st) {
              if(pair.second>target) ans=pair.first;
       }
       cout<<ans<<endl;
      
       return 0;

}