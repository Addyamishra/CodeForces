#include <bits/stdc++.h>
using namespace std;
int main() {
       int n,m,k;
       cin>>n>>m>>k;
       vector<long long> players(m+1);
       for(int i=0;i<players.size();i++)
       {
              cin>>players[i];
       }
       int ans=0;
       long long f=players[m];
       for(int i=0;i<m;i++)
       {
                 long long b=players[i]^f;
                 if(__builtin_popcount(b)<=k) ans++;
       }
       cout<<ans<<endl;
       return 0;
}
