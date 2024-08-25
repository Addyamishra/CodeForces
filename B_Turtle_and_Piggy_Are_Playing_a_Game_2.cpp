#include <bits/stdc++.h>
using namespace std;

#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define nl '\n'

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
         
        }
        sort(arr.begin(),arr.end());
       int ans=n%2==0?arr[n/2]:arr[n/2];
        cout << ans << nl;
    }
    return 0;
}
