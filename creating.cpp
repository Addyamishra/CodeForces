#include <bits/stdc++.h>
using namespace std;

int main() {
       int n;
       cin>>n;
       for(int i=0;i<n;i++)
       {
        string str1,str2;
        cin>>str1>>str2;
        char temp=str1[0];
        str1[0]=str2[0];
        str2[0]=temp;
        cout<<str1<<" "<<str2<<endl;
       }
       return 0;
}