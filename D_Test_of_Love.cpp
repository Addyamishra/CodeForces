#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool ans=false;
bool get(string str, int n, int m, int k, int ind, vector<vector<bool>>& dp) {
    if (ind >=n) {
        return true; // Successfully crossed the river
    }
    
    if (str[ind] == 'C' || k < 0) {
        return false; // Hit a crocodile or ran out of swimming capacity
    }
    
    if (dp[ind][k]!=NULL) {
        return dp[ind][k]; // Return memoized result
    }
    
    bool flag1 = false;
    bool flag2 = false;
    
    if (str[ind] == 'L') {
        // ErnKor can jump up to m meters forward on logs or water
        for (int i = 1; i <= m; i++) {
            
                flag1 = flag1 || get(str, n, m, k, ind + i, dp);
            
        }
    } else {
        // ErnKor swims to the next meter of water
        flag2 = get(str, n, m, k - 1, ind + 1, dp);
    }
    
    // Memoize the result
    dp[ind][k] = flag1 || flag2;
    
    return dp[ind][k];
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if(n==1){
              if(k>=1){
                cout << "YES" << endl;
              }
              else{
               if(n>=2)  cout << "YES" << endl;
               else  cout << "NO" << endl;
              }
              break;
        }
        string str;
        cin >> str;
        
        // Prepend 'L' to the string str
        str = 'L' + str;
        
        // Initialize DP table with dimensions (n+2) x (k+1)
        vector<vector<bool>> dp(n + 2, vector<bool>(k + 1, NULL));
        
       bool ans= get(str, n+1 , m, k, 0, dp); // n+1 because we added an extra meter
        
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
