#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str = to_string(n);
        bool ans = false;

        // Check if the string starts with "10" and has more than 2 characters
        if (str.length() > 2 && str.substr(0, 2) == "10") {
            string s = str.substr(2);
            int a = stoi(s);
            if (a >= 2) {
                ans = true;
            }
            if(a<=9 && str.substr(2).length()>=2) ans=false; 
        }

        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
