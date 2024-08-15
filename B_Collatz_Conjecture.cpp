#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--)
       {
              long long x,y,k;
              cin>>x>>y>>k;
              while(x>1 && k>0)
              {
                     long long rem=y-x%y;
                     if(rem>=k)
                     {
                            x+=k;
                            k=0;
                     }
                     else{
                            x+=rem;
                            k-=rem;
                     }
                     while(x%y==0) x/=y;
              }
              if(k>0)
             {
              k=k%(y-1);
              x+=k;
             }
             cout<<x<<endl;
       }
       return 0;
}