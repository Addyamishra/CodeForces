#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;

        // Check if the lengths match (optional but good practice)
        if (str1.length() != str2.length()) {
            cout << "Strings must be of the same length!" << endl;
            continue;
        }

        // Initialize the arrays to track 'X' and non-'X' positions
        vector<vector<int>> arr(2, vector<int>(str1.length(), 1));
        int x = 0, a = 0;
        
        // Populate the arrays based on the presence of 'X'
        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] == 'X') {
                arr[0][i] = 0;
                x++;
            } else {
                a++;
            }
            if (str2[i] == 'X') {
                arr[1][i] = 0;
                x++;
            } else {
                a++;
            }
        }

        // Calculate the answer
        int ans = 0;
        if (a < 2 * str2.length() && x < 2 * str2.length()) {
            for (int i = 1; i < str1.length() - 1; i++) {
                if (arr[0][i] == 1 && arr[0][i - 1] == 1 && arr[0][i + 1] == 1) {
                    if (arr[1][i - 1] == 0 && arr[1][i + 1] == 0) {
                        ans++;
                    }
                }
                if (arr[1][i] == 1 && arr[1][i - 1] == 1 && arr[1][i + 1] == 1) {
                    if (arr[0][i - 1] == 0 && arr[0][i + 1] == 0) {
                        ans++;
                    }
                }
            }
        }

        cout << ans <<endl;
    }
    return 0;
}
