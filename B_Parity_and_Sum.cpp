#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        vector<long long> arr(a);
        if (a == 1) {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < a; i++) 
            cin >> arr[i];
        
        sort(arr.begin(),arr.end());
        long long max_odd = -1;
        long long e = 0;
        long long ans = 0;

        for (long long i : arr) {
            if (i % 2!=0) {  // Check if i is odd
                max_odd = max(max_odd, i);
            }
            if (i%2 == 0) {  // Check if i is even
                e++;
            }
        }

        if (max_odd == -1 || e == 0) {
            cout << 0 << endl;
            continue;
        }
        

        for (int i =0; i<arr.size(); i++) {
            if (arr[i] % 2 == 0) { 
                if (arr[i]<max_odd) {
                    ans++;
                    max_odd += arr[i];
                } else{
                      max_odd += (arr[i]*2);
                    ans += 2;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
