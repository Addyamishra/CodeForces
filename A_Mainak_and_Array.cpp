#include <bits/stdc++.h>
using namespace std;

// Short forms
#define ll long long
#define nl '\n'
#define nlp(i, n) for (int i = 0; i < (int)(n); ++i)
#define lp(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)

// Faster Input Output
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL))

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        // Read array elements and find global max and min
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

            int maxDiff = INT_MIN;
            for (int i = 0; i < n-1; i++) {
                maxDiff = max(maxDiff, arr[i] - arr[i + 1]);
            }

            int minPrefix = INT_MAX;
            for (int i = 0; i < n - 1; i++) {
                minPrefix = min(minPrefix, arr[i]);
            }
            maxDiff = max(maxDiff, arr[n - 1] - minPrefix);

            int maxSuffix = INT_MIN;
            for (int i = 1; i < n; i++) {
                maxSuffix = max(maxSuffix, arr[i]);
            }
            maxDiff = max(maxDiff, maxSuffix - arr[0]);
            maxDiff=maxDiff>1000?0:maxDiff;
            cout << maxDiff << nl;
        }
    
    return 0;
}
