#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int k = 0; k < n; k++) {
        int len;
        cin >> len;
        vector<long long> arr(len);
        for (int i = 0; i < len; i++)
            cin >> arr[i];

        vector<long long> arr1(len);
        for (int i = 0; i < len; i++)
            arr1[i] = arr[i];

        for (int i = 1; i < len; i++)
            arr1[i] += arr1[i - 1];

        set<long long> taken;
        int ans = 0;
        for (int i = 0; i < len; i++) {
            if (arr1[i] % 2 == 0) {
                long long tar = arr1[i] / 2;
                if (arr[i] == tar || taken.find(tar) != taken.end())
                    ans++;
            }
            taken.insert(arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
