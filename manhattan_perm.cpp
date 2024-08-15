#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
       long long n,k;
       cin>>n>>k;
       vector<int> arr(n);
       if(n*(n+1)/2-n!=k) 
       {
              cout<<"No";
              return 0;
       }
       for(int i=1;i<=n;i++) arr[i-1]=i;;
  }
       return 0;
}