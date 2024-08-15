#include <bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>> cont, const string& str) {
  map<char,vector<int>> temp;
  for(int i = 0; i < str.length(); i++) temp[str[i]].push_back(i);
vector<vector<int>> arr;
for(auto& pair:temp) arr.push_back(pair.second);
sort(arr.begin(),arr.end());
return cont==arr;   
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int m;
        cin >> m;
        vector<string> str(m);
        for (int i = 0; i < m; i++) {
            cin >> str[i];
        }
        
        // Initialize the map to store indices
        map<int, vector<int>> c;
        for (int i = 0; i < arr.size(); i++) {
           c[arr[i]].push_back(i);
        }
        vector<vector<int>> cont;
        for(auto & pair:c)  cont.push_back(pair.second);
        sort(cont.begin(),cont.end());
        bool ans = false;
        for (const string& s : str) {
            if (s.length() != arr.size())cout << "NO" << endl;
           else if(check(cont, s)) {
              
            cout << "YES" << endl;
            }
           else cout << "NO" << endl;
        
            }
        }
        
        
    
    return 0;
}
