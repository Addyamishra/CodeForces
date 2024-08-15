#include <bits/stdc++.h>
using namespace std;

int main() {
       int i;
       cin>>i;
       for(int j=0;j<i;j++)
       {
              int n;
              cin>>n;
              vector<int> arr;
              for(int i=0;i<n;i++)
              {
                int a;
                cin>>a;
                arr.push_back(a);
              }

              int s=0;
              while(s<arr.size()-1 && arr[s]<=arr[s+1]) s++;
              if(s==n-1) 
              {
                     cout<<"YES";
                     return 0;
              }
              s++;
              while(s<arr.size()-1 && arr[s]<=arr[s+1]) s++;
              if(s==n-1 && arr[0]>=arr[n-1]) cout<<"YES"<<endl;
              else cout<<"NO"<<endl;

       }
       return 0;
}