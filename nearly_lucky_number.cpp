
#include<iostream>
using namespace std;
 int main()
 {
      long long n;
       cin>>n;
       int c=0;
       while(n>0)
       {
         if(n%10==7 || n%10==4) c++;
         n/=10;
       }
       if(c==7 || c==4) cout<<"YES";
       else cout<<"NO";
 }