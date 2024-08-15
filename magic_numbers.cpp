#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main() {
       int num;
       cin>>num;
       string str=to_string(num);
       int i=str.length()-1;
       int temp=0;
       while(i>=0)
       {    
              if(str[i]!='1' && str[i]!='4')
              {
                     cout<<"NO";
                     return 0;   
              }
               temp+=(str[i]-'0');  
              if(temp==5 || temp==9 || temp==1)
              {
                temp=0;
              }
              i--;
       }
       if(temp==0) cout<<"YES";
       else cout<<"NO";
       return 0;
}