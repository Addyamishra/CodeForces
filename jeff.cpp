#include <bits/stdc++.h>
using namespace std;

int main() {
       int n;
       cin>>n;
       map<int,int> m1;
       vector<int> arr(n);
       for(int i=0;i<n;i++)
       {
              cin>>arr[i];
              m1[arr[i]]++;
       }
       map<int,int> m;
       set<int> taken;
       for(int  i=0;i<n;i++)
       {      if(taken.find(arr[i])!=t
       aken.end()) continue;
              else if(m1[arr[i]]==1) m[arr[i]]=0;
              else{
                     int count=0;
                     for(int j=i+1;j<n;j++)
                     {
                              count++;
                            if(arr[j]==arr[i]) break;
                     }
                     taken.insert(arr[i]);
                     bool flag=true;
                     for(int j=i;j<n;j+=count)
                     {
                            if(arr[j]!=arr[i])
                            {
                                   flag=false;
                                   break;
                            }
                     }
                     if(flag) m[arr[i]]=count;
              }
       }
       cout<<m.size()<<endl;
       for (const auto& pair : m) {
         cout<<pair.first<<" "<<pair.second<<endl;
       }

       return 0;
}