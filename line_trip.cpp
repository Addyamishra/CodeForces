#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> pump(x + 1, 0);
        int last = 0;

        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            pump[a]++;
            last = max(last, a);
        }

        int ans = 0;

        if (last < x) {
            ans = max(ans, (x - last) * 2);
        }

        int prev = 0;

        for (int i = 0; i <= x; ++i) {
            if (pump[i] == 1) {
                ans = max(ans, i - prev);
                prev = i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
