#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main() {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
     int n,m;
     cin>>n>>m;
     if(m>n) cout<<"NO"<<endl;
     else if((n-m)%2==0) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     }
     return 0;
}