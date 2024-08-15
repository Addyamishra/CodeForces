#include <bits/stdc++.h>
using namespace std;

int main() {
       long long n;
       cin>>n;
         
       vector<long long> arr(n);
      
       for(long long i=0;i<n;i++)
       {
              cin>>arr[i];
       }
         
       sort(arr.begin(),arr.end());
         
       long long target=arr[arr.size()-1]-arr[0];
       long long count=0;
       map<long long ,long long> s;
       for(int i=0;i<n;i++)
       {
        
             count+=(s[arr[i]-target]);
             s[arr[i]]++;
       }
       cout<<target<<" "<<count;
       return 0;
}