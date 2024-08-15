#include <bits/stdc++.h>
using namespace std;
int countOccurrences(string& str, char target) {
    int count = 0;
    for (char ch : str) {
        if (ch == target) {
            count++;
        }
    }
    return count;
}


int main() {
    int a;
    cin >> a;
    while (a--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int ans=0;
        if(n-2==0)
        {
              cout<<stoi(s)<<endl;
        }
        else if(countOccurrences(s,'1')==s.length()) ans=1;
        else if(countOccurrences(s,'0')>0) ans=0;
        else {
              for(char ch:s)
              {
                     ans+=(ch=='1')?0:ch-'0';
              }
       }
       cout<<ans<<endl;
    }
    return 0;
}
