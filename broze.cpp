#include <bits/stdc++.h>
using namespace std;

int main() {
        string num;
        cin>>num;
        string ans="";
        int i=0;
       while(i<num.length())
        {
          if(num[i]=='.')
          {
            ans+='0';
            i++;
          }
          else
          {
            if(i+1<num.length() && num[i+1]=='.')
            {
             ans+='1';
            }
            else if(i+1<num.length() && num[i+1]=='-' ){
              ans+='2';
            }
            i+=2;
          }

        }
        cout<<ans;
       return 0;
}