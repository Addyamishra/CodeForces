#include <iostream>
#include <vector>
#include <algorithm> // for std::max

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n+1);
        vector<int> b(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }

      

        
        int m =0; 
        int ans = 0; 
        int curr=0;
        for (int i = 1; i<=min(n,k); i++) {
            curr+=(a[i]);
            m=max(m,b[i]);
            ans=max(ans,curr+(k-i)*m);
        }
        cout << ans << endl;
    }

    return 0;
}
