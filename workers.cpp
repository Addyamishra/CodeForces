#include <bits/stdc++.h>
using namespace std;
pair<int,int> get(vector<vector<int>>& temp)
{
       map<int,int> m;
       for(int i=0;i<temp.size();i++)
       mp[i]=0;
       for(int i=0;i<temp.size();i++)
       {
              for(int j=0;j<temp[0].size();j++)
              {
                     mp[i]|(1 << temp[i][j]);
              }
       }
       vector<int> c;
       int frst=-1;
       int scnd=-1;
       int max=INT_MIN;

       for (const auto& pair : map) {
              for (const auto& t : map){
                 int a= __builtin_popcount(pair.second&t.second);
                 if(a>max) 
                 {
                     frst=pair.first;
                     scnd=t.first;
                 }
              }
       }
       return {frst,scnd};
}
int main() {
       return 0;
}