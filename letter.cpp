#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> store;
    string heading, result;
    getline(cin, heading);
    getline(cin, result);
    
    // Populate the map with characters from the heading string (ignoring spaces)
    for (char ch : heading) {
        if (ch != ' ') {
            store[ch]++;
        }
    }
    
    // Check if characters in the result can be formed using characters from the heading
    for (char ch : result) {
        if (ch != ' ') {
            if (store[ch] > 0) {
                store[ch]--;
            } else {
                cout << "NO";
                return 0;
            }
        }
    }
    
    cout << "YES";
    return 0;
}

