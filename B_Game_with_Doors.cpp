#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
              int x,y,a,b;
              cin>>x>>y>>a>>b;
              int ans;
              if(max(x,a)>=min(y,b)) ans=1;
              else{
     int start = std::max(x, a);
    int end = std::min(y, b);
    int overlap = (start <= end) ? (end - start + 1) : 0;
                       if(a==x && b==y) ans=overlap-1;
                       else if(a==x || b==y) ans=overlap;
                       else  ans=overlap+1;


              }

              cout<<ans<<endl;
       }
       return 0;
}