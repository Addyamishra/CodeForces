#include <bits/stdc++.h>
using namespace std;

// Short forms
#define ll long long
#define nl '\n'

// Constants
#define INF LLONG_MAX

// Faster Input Output
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));

// Utility functions
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int n = str.length() / 2;
        stack<char> st;
        int ans = 0;

        for (int i = 0; i < str.length(); i++) {
            if (st.empty()) {
                st.push(str[i]);
            } else {
                if (str[i] != st.top()) {
                    st.pop();
                    ans++;
                } else {
                    st.push(str[i]);
                }
            }
        }

        if (ans % 2 == 0) {
            cout << "NET" << nl;
        } else {
            cout << "DA" << nl;
        }
    }
    return 0;
}
