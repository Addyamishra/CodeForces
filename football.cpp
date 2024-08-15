#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string winner = "";
    int max_goals = -1;
    map<string, int> goals_count; // Renamed from 'map' to 'goals_count'
    
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        goals_count[temp]++;
        if (goals_count[temp] > max_goals) {
            max_goals = goals_count[temp];
            winner = temp;
        }
    }
    
    cout << winner; // Moved this line outside the loop to print the final winner
    return 0;
}
