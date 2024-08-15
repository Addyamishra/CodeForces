#include <bits/stdc++.h>
using namespace std;

int main() {
       int k;
       string str;
       cin>>k>>str;
       map<char,int> m;
       int tele=-1;
       if(k>str.length() || str.length()%k!=0) 
       {
              cout<<-1;
              return 0;
       }
       if(k==1){
              cout<<str;
              return 0;
       }
       for(char ch:str)
       {
              m[ch]++;
       }
       for (const auto& pair : m) {
        
        if(pair.second%k!=0) 
        {
             cout<<-1;
              return 0;  
        }
       }
        string ans="";
        for (const auto& pair : m) {

         char ch=pair.first;
         int times=(pair.second)/k;
         for(int i=0;i<times;i++) ans+=ch;
        }
     string t="";
    for(int i=0;i<k;i++) t+=ans;
    
         cout<<t;

       return 0;
}