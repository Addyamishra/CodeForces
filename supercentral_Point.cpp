
#include<iostream>
#include<vector>
#include<map>
using namespace std;


int main() {
  long long n;
  cin>>n;
  long long X[n];
  long long Y[n];
  for(long long i=0;i<n;i++)
  {
     cin>>X[i]>>Y[i];
  }
  int ans=0;
  for(long long i=0;i<n;i++)
  {
       bool a=false,b=false,c=false,d=false;
         for(long long j=0;j<n;j++)
         {
            if(X[i]>X[j] && Y[i]==Y[j]) a=true;
            if(X[i]<X[j] && Y[i]==Y[j]) b=true;
            if(X[i]==X[j] && Y[i]<Y[j]) c=true;
            if(X[i]==X[j] && Y[i]>Y[j]) d=true;
         }
         if(a&&b&&c&&d) ans++;

  }
  cout<<ans;
}

