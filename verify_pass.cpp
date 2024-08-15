#include <bits/stdc++.h>
using namespace std;

int main() {
       int iter;
       cin>>iter;
       for(int i=0;i<iter;i++)
       {
         int n;
         string ans="";
         string str;
         cin>>n>>str;
         string temp=str;
         sort(temp.begin(),temp.end());
         for(int i=0;i<str.length();i++)
         {
              if(str[i]!=temp[i]) ans="NO";
         }
         if(ans.length()>0) cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
       }
       return 0;
}