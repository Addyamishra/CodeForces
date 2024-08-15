#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main() {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++) cin>>arr[i];
       int min_r=-1;
       int min_c=-1;
       int diff=10001;
       for(int i=0;i<n-1;i++)
       {
              int d=abs(arr[i]-arr[i+1]);
              if(d<diff)
              {
                     min_r=i;
                     min_c=i+1;
                     diff=d;
              }
       }
       if(diff>abs(arr[0]-arr[n-1]))
       {
              min_r=n-1;
              min_c=0;
       }

       cout<<min_r+1<<" "<<min_c+1;
       return 0;
}