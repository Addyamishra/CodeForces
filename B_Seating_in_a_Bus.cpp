#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
              int n;
              cin>>n;
              vector<int> arr(n,0);
              for(int i=0;i<n;i++){
                     cin>>arr[i];
              }
              bool ans=true;
              set<int> cont;
              cont.insert(arr[0]);
              for(int i=1;i<arr.size();i++){
                 if(cont.find(arr[i]-1)==cont.end() && cont.find(arr[i]+1)==cont.end()) ans=false;\
                 cont.insert(arr[i]);              }
                  if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        } 
       }

       return 0;
}