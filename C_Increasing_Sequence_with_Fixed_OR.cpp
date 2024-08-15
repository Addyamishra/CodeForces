#include <iostream>
#include <vector>
using namespace std;

void generateNumbersWithZeros(vector<long long>& result, long long current, const vector<int>& arr, int index, long long n) {
    if (index == arr.size()) {
        if (current < n) {
            result.push_back(current);
        }
        return;
    }
    
    // Set the index-th bit to 0 and recurse
    generateNumbersWithZeros(result, current & ~(1LL << arr[index]), arr, index + 1, n);
    // Set the index-th bit to 1 and recurse (only if setting bit to 1 is within range)
    if ((current | (1LL << arr[index])) < n) {
        generateNumbersWithZeros(result, current | (1LL << arr[index]), arr, index + 1, n);
    }
}

vector<long long> findNumbersWithZeros(long long n, const vector<int>& arr) {
    vector<long long> result;
    generateNumbersWithZeros(result, 0, arr, 0, n);
    return result;
}

vector<int> findZeroBitsPositions(long long n) {
    vector<int> zeroPositions;
    for (int i = 0; i < 64; ++i) { // Considering 64 bits for a long long
        if ((n & (1LL << i)) == 0) {
            zeroPositions.push_back(i);
        }
    }
    return zeroPositions;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;

        vector<int> zeroBitPositions = findZeroBitsPositions(n);
        vector<long long> ans = findNumbersWithZeros(n, zeroBitPositions);

        for (long long i : ans) {
            cout << i << endl;
        }
    }

    return 0;
}
