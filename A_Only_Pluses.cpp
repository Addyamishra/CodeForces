#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
              int a,b,c;
              cin>>a>>b>>c;
              vector<vector<int>> arr={{0,0,5},{0,5,0},{5,0,0},{0,1,4},{0,4,1},{1,0,4},{1,4,0},{4,0,1},{4,1,0},{0,2,3},{0,3,2},{2,0,3},{2,3,0},{3,0,2},{3,2,0},{1,2,2},{2,1,2},{2,2,1},{1,1,3},{1,3,1},{3,1,1}};
              int ans=INT_MIN;
              for(int i=0;i<21;i++){
                     int x=arr[i][0];
                      int y=arr[i][1];
                       int z=arr[i][2];
                       int curr=(a+x)*(b+y)*(c+z);
                       if(ans<curr) ans=curr;
                     

              }
              cout<<ans<<endl;
       }
       return 0;
}