#include <bits/stdc++.h>
using namespace std;

int main() {
       int n,a,b;
       cin>>n>>a>>b;
       int ans=0;
       int bucket=n-a;
       int max_poss=b+1;
       if(n-(max_poss+a)>0) cout<<b+1;
       else cout<<bucket;
       return 0;
}