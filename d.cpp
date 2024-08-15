#include <iostream>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute the sum of digits of a number
int digitSum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;

        long long ans = 0;
        for (int i = l; i < r; i++) {
            long long num = pow(10, i);
            if (digitSum(k * num) == k * digitSum(num)) {
                ans++;
            }
        }

        cout << ans % MOD << endl;
    }

    return 0;
}
