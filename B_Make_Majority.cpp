#include <bits/stdc++.h>
using namespace std;
string replaceZeroSubarrays(string& input_str) {
    string result;
    size_t i = 0;
    while (i < input_str.length()) {
        if (input_str[i] == '0') {
            result += '0';
            while (i < input_str.length() && input_str[i] == '0') {
                i++;
            }
        } else {
            result += '1';
            i++;
        }
    }
    return result;
}
int main() {
       int t;
       cin>>t;
       while(t--){
          int n;
          string str;
          cin>>n>>str;
          int ones=0;
          int zeros=0;
         int i=0;
         string temp=replaceZeroSubarrays(str);
         for(auto& ch:temp){
              if(ch=='1') ones++;
              else zeros++;
         }
         if(ones<=zeros){
              cout<<"NO"<<endl;
         }
         else{
              cout<<"YES"<<endl;
         }
       }
       return 0;
}