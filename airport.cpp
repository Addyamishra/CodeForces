#include <bits/stdc++.h>
using namespace std;

int main() {
    int pass,planes;
    cin >>pass>> planes;

    int max_profit = 0;
    int min_profit = 0;
    priority_queue<int> min;
    priority_queue<int, vector<int>, greater<int>> max;

    for (int i = 0; i < planes; i++) {
        int a;
        cin >> a;
        min.push(a);
        max.push(a);
    }
  int temp=pass;

  while(pass>0 && !max.empty()) {
    int n = max.top();
    max.pop();
    max_profit += n;
     pass--;
    if(n==1) continue;
    max.push(n - 1);
   
}

while(temp>0 && !min.empty()) {
    int n = min.top();
    min.pop();
    min_profit += n;
    temp--;
    if(n==1) continue;
    min.push(n - 1);
    
}
    cout << min_profit<<" "<<max_profit;

    return 0;
}
