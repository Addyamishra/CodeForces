#include<iostream>
#include<vector>
#include<utility>
#include <set>

using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       long long n;
       cin>>n;
       vector<vector<long long>> arr;
       set<int> set;
       for(int i=0;i<n;i++)
       {
              int a;
              cin>>a;
              arr.push_back(a);
              set.insert(a);
       }
       

       
    }
}