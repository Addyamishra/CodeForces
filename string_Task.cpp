#include <bits/stdc++.h>
#include <string>

using namespace std;
string toLowerCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c >= 'A' && c <= 'Z') {
            // Convert uppercase to lowercase
            result += (c - 'A') + 'a';
        } else {
            // Keep non-uppercase characters as they are
            result += c;
        }
    }
    return result;
}

int main() {
       string str;
       cin>>str;
       str=toLowerCase(str);
      string ans="";
//       cout<<str;
      for(char ch:str)
      {
       if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
       continue;
       ans+='.';
       ans+=ch;
      }
      cout<<ans;
       return 0;
}