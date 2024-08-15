#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    long long sum = 0;
    long long zeros = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] == 0) zeros++;
    }
    if (zeros==0 || sum%9!= 0) {
        cout << 0;
        return 0;
    }
    sort(arr, arr + n, greater<int>());

    for (int i : arr) cout << setw(5) << i;

    return 0;
}
