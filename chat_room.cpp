#include <bits/stdc++.h>
using namespace std;

int main() {
       string str;
       cin>>str;
       string ans="hello";
       int i=0;
       int j=0;
       while(i<str.length() && j<ans.length())
       {
              if(str[i]==ans[j]) 
              {
                     i++;
                     j++;
              }
              else i++;
       }
       if(j!=ans.length()) cout<<"NO";
       else cout<<"YES";
       return 0;
}