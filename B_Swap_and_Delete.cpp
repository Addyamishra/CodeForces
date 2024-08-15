#include <bits/stdc++.h>
using namespace std;

int main() {
       int n;
       cin>>n;
       while(n--)
       {
         string str;
         cin>>str;
         int ze=0;
         int on=0;
         for(auto ch:str) 
         {if(ch=='1') on++;
         else ze++;
         }

         for(auto ch:str){
          if(ch=='1') ze--;
          else on--;
         }
         int ans=abs(ze)+abs(on);
         cout<<ans<<endl;
       }
       return 0;
}