#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--){
        int xc,yc,k;
        cin>>xc>>yc>>k;
        vector<vector<long long>> temp;
        temp.push_back({xc*k,yc*k});
        for(long long i=1;i<k*2;i++){
              if(xc*k==yc*k && xc*k==i) continue;
            if(k-temp.size()==1){
            int r=temp[temp.size()-1][0];
            int c=temp[temp.size()-1][1];

         break;
            }
            else{
              if(temp.size()==k) break;
              int r=i;
              int c=-1*i;
              temp.push_back(vector<long long>{0,c});
              temp.push_back(vector<long long>{0,r});

            }
        }
        for(int i=0;i<temp.size();i++){
              cout<<temp[i][0]<<" "<<temp[i][1]<<endl;
        }
       }
       return 0;
}