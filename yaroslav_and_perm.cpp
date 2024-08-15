#include <bits/stdc++.h>
using namespace std;

int main() {
       int n;
       cin>>n;
       map<int,int> m;
       for(int i=0;i<n;i++)
       {
        int a;
        cin>>a;
        m[a]++;
       }
       string ans="YES";
       int max1=(n%2==0)?n/2:n/2+1;
        for (const auto& pair : m) {
              if(pair.second>max1) ans="NO";
        }
        cout<<ans;
        
       return 0;
}