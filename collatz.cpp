#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       for(int i=0;i<t;i++)
       {
              long long x,y,k;
              cin>>x>>y>>k;
              while(k>0)
              {
              long long last_mul=x-(x%y);
              long long nxt_x=y+last_mul;
              if(k<(nxt_x-x))
              {
                x+=k;
                k=0;
              }
              else{
              x=nxt_x;
              k-=(nxt_x-x);
              }
               while(x%y==0)
               x/=y;
              }
              cout<<x<<endl;
       }
       return 0;
}