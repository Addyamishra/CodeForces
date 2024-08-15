#include <bits/stdc++.h>
using namespace std;

int main() {
       int s,n;
       cin>>s>>n;

      priority_queue<vector<int>> arr;
       for(int i=0;i<n;i++)
       {
         int a,b;
         cin>>a>>b;
         arr.push({a,b});
       }
       int total=arr.size();

       while(!arr.empty())
       {
         vector<int> temp=arr.top();
         int mon=temp[0];
         int gain=temp[1];
         arr.pop();
         if(s>mon)
         {  
              s+=(gain);
              cout<<s;
              continue;
         }
         else 
         {
           cout<<"NO";
           return 0;   
         }

       }
        cout<<"YES";
       return 0;
}