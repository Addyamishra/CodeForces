#include <bits/stdc++.h>
using namespace std;

int main() {
       int w,h,n;
       cin>>w>>h>>n;
       int s=0;
       int e=1000000000;
       int ans=-1;
       int total_area=h*w*n;
       while(s<=e){
         int m=s-(e+s)/2;
         if(m*m>=total_area){
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