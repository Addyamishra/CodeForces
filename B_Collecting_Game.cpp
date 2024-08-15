#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> sorted(n);
        vector<long long> pref(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sorted[i] = arr[i];
            pref[i] = arr[i];
        }
        sort(sorted.begin(), sorted.end());
        sort(pref.begin(), pref.end());
        for(int i=1;i<arr.size();i++)   pref[i]+=pref[i-1];
        map<int,int> cont;
        cont[sorted[n-1]]=n-1;
        for(int i=n-2;i>=0;i--){
              if(pref[i]>=sorted[i+1]) cont[sorted[i]]=cont[sorted[i+1]];
              else cont[sorted[i]]=i;
        }
        for(int i=0;i<n;i++){
           cout<<cont[arr[i]]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
