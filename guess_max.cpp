#include <bits/stdc++.h>
using namespace std;

int main() {
       int n;
       cin>>n;
       for(int i=0;i<n;i++)
       {
              int s;
              cin>>s;
          vector<int> arr(s);
          for(int i=0;i<s;i++)
          {
              cin>>arr[i];
          }
          int m=INT_MAX;
          for(int i=0;i<s-1;i++)
          {
             int frst=arr[i];
             int scnd=arr[i+1];
             int ma=max(frst,scnd);
             if(ma-1<m) m=ma-1;
          }
          cout<<m<<endl;
       }
       return 0;
}