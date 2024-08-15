#include <bits/stdc++.h>
using namespace std;
// void sort(vector<int>& arr,int ind)
// {
//        if(ind==1) return;
//        sort(arr,ind-1);
//        int temp=arr[ind];
//        arr[ind]=arr[ind-1];
//        arr[ind-1]=temp;
// }
int main() {
       int n;
       cin>>n;
          cout<<n<<" ";
        for(int i=1;i<n;i++)
       { 
        cout<<i<<" ";
       }
       return 0;
}


void sort(vector<int>& arr,int ind)
{
       if(ind==0) return;
       sort(arr,ind-1);
       int temp=arr[ind];
       arr[ind]=arr[ind-1];
       arr[ind-1]=temp;
}
// int main() {
//        vector<int> arr;
// //     for(int i=1;i<2;i++)
// //     { 
// //        if(i==2) 
// //        {
// //               arr.push_back(2);
// //        }
// //        arr.push_back(i);
// //     }
// arr.push_back(6);
// arr.push_back(1);
// arr.push_back(2);
// arr.push_back(3);
// arr.push_back(4);
// arr.push_back(5);
// arr.push_back(9);
//       sort(arr,arr.size()-1);

//       for(int i:arr) cout<<i<<endl;
//        return 0;
// }