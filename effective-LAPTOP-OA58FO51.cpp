
#include<iostream>
#include<vector>
#include<map>
using namespace std;


int main() {
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  int v=0;
  int p=0;
  map<int,int> map;
  int q;
  cin>>q;
  for(int i=0;i<q;i++)
  {
       int qu;
       cin>>qu;
       map[qu]++;
  }

  for(int i=0;i<n;i++)
  {
       int ele=arr[i];
       if(map[ele]>0) 
       {
          v+=(map[ele]*(i+1));
          p+=(map[ele]*(n-i));

       }
  }

 cout<<v<<" "<<p;
}