#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t>0)
       {    int max_num=-1;
            int m=-1;
            int n;
            cin>>n;
            for(int i=2;i<=n;i++)
            {
              int curr=0;
              for(int j=1;j<n;j++)
              {
                     if(j*i>n)
                     {
                            break;
                     }
                     curr+=(j*i);
              }
              if(curr>max_num)
              {
                     max_num=curr;
                     m=i;
              }
            }
              cout<<m<<endl;
              t--;
       }
       return 0;
}