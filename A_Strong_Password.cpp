#include <bits/stdc++.h>
using namespace std;

// Function to find the longest substring with the same character
vector<int> longestUniformSubstring(const std::string& str) {
    vector<int> result(2, -1); // Initialize result vector with -1, -1 for start and end

    if (str.empty()) {
        return result; // Return [-1, -1] for empty input
    }
    
    int maxLength = 0;
    int maxStart = 0;
    int maxEnd = 0;

    int currentStart = 0;

    for (int i = 1; i < str.length(); ++i) {
        if (str[i] != str[i - 1]) {
            // End of the current uniform substring
            int currentLength = i - currentStart;
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = currentStart;
                maxEnd = i - 1;
            }
            // Update the start of the new uniform substring
            currentStart = i;
        }
    }
    
    // Check the last uniform substring
    int lastLength = str.length() - currentStart;
    if (lastLength > maxLength) {
        maxLength = lastLength;
        maxStart = currentStart;
        maxEnd = str.length() - 1;
    }

    result[0] = maxStart;
    result[1] = maxEnd;
    return result;
}

char get(char a,char b,char d) {
    // Iterate through printable ASCII characters (from 32 to 126)
    for (char c = 97; c <= 123; ++c) {
        if (c != a && c!=b && c!=d ) {
            return c;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        vector<int> indices = longestUniformSubstring(str);
        int start = indices[0]+1;
        int end = indices[1];
        char ch=str[start];
        char diff=get(ch,start+1>=0?str[start-1]:ch,end-1>=0?str[end-1]:ch);
        str.insert(start + (end - start) / 2, 1,diff);
        cout<<str<<endl;

    }
    return 0;
}
