#include <bits/stdc++.h>
using namespace std;

int main() {
       string str;
       cin>>str;
       int i=0;
       string dont="WUB";
       string ans="";
       bool flag=false;
       while(i<str.length()-2)
       {
              if(str.substr(i, 3)!=dont) 
              {
                     ans+=str[i];
                     i++;
                     flag=false;
              }
              else {
                    if(!flag) 
                    {
                     ans+=" ";
                     flag=true;
                    }
                     i+=3;

              }
               
       }
       if(str[i]!='w' && str[i+1]!='U' && str[i+2]!='B'  ) 
       {
              ans+=str[i];
              ans+=str[i+1];
       }
       if(ans[0]==' ') ans= ans.substr(1, ans.length()-2);
       cout<<ans;
       return 0;
}