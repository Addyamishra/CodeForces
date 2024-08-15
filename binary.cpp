#include <bits/stdc++.h>
using namespace std;

int main() {
       vector<int> arr;
       for(int i=0;i<9;i++) arr.push_back(i);
       int tar=1;
       int s=0;
       int e=arr.size()-1;
       while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==tar) {
              cout<<"Found";
              break;
        }
        else if(arr[m]>tar)  e=m-1;
        else s=m+1;
       }
       return 0;
}