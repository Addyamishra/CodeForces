#include <bits/stdc++.h>
using namespace std;

int main() {
       int n
       cin>>n;
       vector<int> arr(2*n);
       map<int,vector<int>> m;
       
       for(int i=0;i<2*n;i++)
       {
           cin>>arr[i];
           m[arr[i]].push_back(i);
       }
       

       return 0;
}