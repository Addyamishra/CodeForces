#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int ans = 0;
        priority_queue<int> pq;
        
        // Push elements from a to a + b - 1
        for (int i = 0; a+i<=b; i++) {
            pq.push(a + i);
        }
        
        // Perform operations on the priority queue
        while (pq.size()>=2) {
            int x = pq.top();
            pq.pop();
      int y = pq.top();
            pq.pop();
            
            x *= 3;
            pq.push(x);
            
            y /= 3;
            ans++;
            
            if (y > 0) {
                pq.push(y);
            }
            else break;
        }
        while(!pq.empty()){
          ans+=(pq.top()/3==0)?1:pq.top()/3;
          pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}
