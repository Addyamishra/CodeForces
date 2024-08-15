#include <bits/stdc++.h>
using namespace std;

int main() {
       int w,h,n;
       cin>>w>>h>>n;
       int s=1;
       int e=n*max(w,h);
       int ans=n*max(w,h);
       while(s<=e){
         int m=s-(e+s)/2;
         if((m/h)*(m/w)>=ans){
          ans=m;
          e=m-1;
         }
         else{
              s=m+1;
         }
         cout<<ans<<endl;
       }
       return 0;
}