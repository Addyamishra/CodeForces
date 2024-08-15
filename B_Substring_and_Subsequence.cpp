#include <bits/stdc++.h>
using namespace std;
int main() {
       int a;
       cin>>a;
       for(int i=0;i<a;i++)
       {
              string sub_str,sub_seq;
              cin>>sub_str>>sub_seq;
              int n=sub_str.length();
              int m=sub_seq.length();
              int ans=n+m;
              for(int i=0;i<m;i++)
              {    int ind=i;
                     for(int j=0;j<n;j++)
                     {
                            if(ind<m && sub_str[j]==sub_seq[ind]) ind++;   
                     }
                     ans=min(ans,m+n-ind+i);
              }
              
              cout<<ans<<endl;

       }
       return 0;
}