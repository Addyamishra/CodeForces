#include <bits/stdc++.h>
using namespace std;

// Short forms
#define ll long long
#define nl '\n'

// Faster Input Output
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL))

int main() {
    FAST_IO; // Enable faster I/O

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

    

        int ans = 0;
        bool f=true;
        // Traverse the array from the second-to-last element to the first
        for (int i = n - 2; i >= 0; --i) {
            // Ensure arr[i] is not greater than arr[i + 1]
            while (arr[i] >= arr[i + 1] && arr[i]>0) {
                arr[i] /= 2;  // Divide arr[i] by 2
                ++ans;        // Count the division operation
            }
            if(arr[i]==arr[i+1]) {
             cout << -1 << nl;
             f=false;
             break;
            }
            if(!f) break;
        }
      if(!f) continue;

        
        cout << ans << nl;
    }

    return 0;
}
