#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
        vector<int> arr(4,0);
        for(int i=0;i<4;i++){
              cin>>arr[i];
        }
        int ans=0;
        if(arr[0]>arr[2] && arr[1]>arr[3]) ans+=2;
        if(arr[0]>arr[3] && arr[1]>arr[2]) ans+=2;
      
        cout<<ans<<endl;
       }
       return 0;
}