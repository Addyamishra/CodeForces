#include <bits/stdc++.h>
using namespace std;
int main() {
       int t;
       cin>>t;
       while(t--){
   int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>a[i][j];
    }
    vector<string> vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
 
    vector<vector<int>> pr(n,vector<int>(m));
    for(int i=0; i<n; i++){
        if(vec[i][0]=='1') pr[i][0]=1;
        else pr[i][0]=-1;
        for(int j=1; j<m; j++){
            pr[i][j] = pr[i][j-1];
            if(vec[i][j]=='1') pr[i][j]++;
            else pr[i][j]--;
        }
    }
 
    for(int j=0; j<m; j++){
        for(int i=1; i<n; i++){
            pr[i][j]+=pr[i-1][j];
        }
    }
 
    int g=0;
    for(int i=0; i<=n-k; i++){
        for(int j=0; j<=m-k; j++){
            int val = pr[i+k-1][j+k-1];
            if(j>0) val-= pr[i+k-1][j-1];
            if(i>0) val-= pr[i-1][j+k-1];
            if(i>0 && j>0) val+=pr[i-1][j-1];
            g=__gcd(g, val);
        }
    }
 
    int diff=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vec[i][j]=='1') diff+=a[i][j];
            else diff-=a[i][j];
        }
    }
    diff=abs(diff);
 
    if(diff==0){
        cout<<"YES\n";
    }
    else if(g==0){
        cout<<"NO\n";
    }
     else if(diff%g==0) cout<<"YES\n";
     else cout<<"NO\n";
    }

    return 0;
}
