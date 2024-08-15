#include <bits/stdc++.h>
using namespace std;

int main() {
       int n;
       cin>>n;
       for(int i=0;i<n;i++)
       {
              int c;
              cin>>c;
              long long m=-1;
              long long last=-1;
              for(int i=0;i<c;i++)
              {
                     long long a;
                     cin>>a;
                     if(i==c-1)
                     {
                      last=a;
                     }
                     else{
                       m=max(m,a);
                     }
              }
       cout<<m+last<<endl;
       }
       return 0;
}