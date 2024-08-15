#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       for(int i=0;i<t;i++)
       {
              long long x,y,a,b;
              cin>>x>>y>>a>>b;
              if(x==a && y==b)
              {
                     cout<<"YES"<<endl;
              }
              else{
                    if ((x - y) * (a - b) < 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
                   

                    
              }
       }
       return 0;
}