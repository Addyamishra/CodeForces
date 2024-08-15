
#include<iostream>
#include<vector>
using namespace std;

int main() {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
              int x,y;
              cin>>x>>y;
              int screens=y%2==0?y/2:y/2+1;
              int left=(screens*15-y*4);
              x-=left;
              if(x<=0) arr[i]=screens;
              else arr[i]=(screens+(x%15==0?x/15:x/15+1));
       }
       for(int i:arr)
       cout<< i << endl;
}