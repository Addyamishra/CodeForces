#include <bits/stdc++.h>
using namespace std;
bool check( vector<int>& arr)
{
  int one=0;
  int bad=-1;
  int bad2=-1;
  for(int i=0;i<26;i++)
  {
       if(arr[i]%2!=0) 
       {
              one++;
              bad2=i;
       }
       else if(arr[i]>0) 
       {
          bad=i;
       }
  }
  if(one>1)
  {
   if(bad==-1) arr[bad2]--;
   else arr[bad]--;
   return false;
  }
 return true;
}
int main() {
       string str;
       cin>>str;
       vector<int> arr(26,0);
       for(char ch:str)
       { 
          arr[(int)ch-97]++;
       }

       bool chance=false;
       while(!check(arr))
       {
         chance=!chance;
       }


      if(!chance) cout<<"First";
      else cout<<"Second";

       return 0;
}