#include <bits/stdc++.h>
using namespace std;

int main() {
       long long t,x,y,a,b;
       string dir;
       cin>>t>>x>>y>>a>>b;
       cin>>dir;
       long long W=0;
       long long S=0;
       long long E=0;
       long long N=0;

       if(x>a) W=abs(x-a);
       else E=abs(a-x); 
       if(y>b) S=abs(y-b);
       else N=abs(b-y);
       int steps=0;
       for(char ch:dir)
       {
         if(ch=='N' && N>0) N--;
         else if(ch=='S' && S>0) S--;
         else if(ch=='E' && E>0) E--;
         else if(ch=='W' && W>0) W--;
         steps++;
         if(N==0 && S==0 && E==0 && W==0) break;
       }
       if(N!=0 || S!=0 || E!=0 || W!=0) cout<<-1;
       else  cout<<steps;
       return 0;
}