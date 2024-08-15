#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
          string temp,target;
          cin>>temp>>target;
          bool flag=false;
          int i=0;
          int j=0;
          while(i<target.length() && j<temp.length()){
              if(target[i]==temp[j]) {
                     i++;
                     j++;
                     continue;
              }
              else{
                   if(temp[i]=='?') {
                     temp[i]=target[i];
                     i++;
                     j++;
                   }
                   else j++;
                   
              }
          }
           i=0;
           j=0;
           while(i<target.length() && j<temp.length()){
              if(temp[j]==target[i]) {
                     i++;
                     j++;
              }
              else j++;
           }
           if(i>=target.length()) flag=true;
              if(flag) {
                     for(int i=0;i<temp.length();i++){
                         if(temp[i]=='?') temp[i]='a';
                     }
                     cout<<"YES"<<endl;
                     cout<<temp<<endl;
              }
              else cout<<"NO"<<endl;
                 }
        return 0;
}