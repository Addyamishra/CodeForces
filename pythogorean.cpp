#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j<= n; j++) {
            int curr = i * i + j * j;
            int squareRoot = sqrt(curr);
            if (squareRoot * squareRoot == curr && squareRoot<=n) {
                ans++;
            }
        }
    }
    cout << ans/2;
    return 0;
}
