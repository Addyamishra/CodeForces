#include <bits/stdc++.h>
using namespace std;
bool check(int a,int b,int c,int d){
 
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        bool ans = false;
        if((c-b) == (b-a)) ans=true;
        else if((2*b-a)>0 && (2*b-a)%c==0) ans =true;
        else if((2*b-c)>0 && (2*b-c)%a==0) ans =true;
        else if((c+a)%(2*b)==0) ans=true;
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
