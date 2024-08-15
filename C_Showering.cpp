#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s,m;
        cin >> n >> s>> m;  // Read the number of pairs and the target value
        
        int last_position = 0;
        bool found = false;
        
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            
            int distance = a - last_position;
            if (distance >= s) {
                found = true;
            }
            
            last_position = b; // Update last position to the current pair's second value
        }
        if(m-last_position>=s) found=true;
        
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
