#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++) {
        int n, k;
        cin >> n >> k;
        
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
       bool flag=true;
       for(int i=1;i<n;i++)
       {
              if(arr[i]<arr[i-1])
              {
              int count=1;
              while(i<n && arr[i]<arr[i-1])
              {
                     i++;
                     count++;
              }
               if(count>k) flag=false;
               else i--;
              }
       }
      if(flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
