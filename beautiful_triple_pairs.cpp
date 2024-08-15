#include<iostream>
#include<vector>
#include <map>
using namespace std;

int main() {
       int s;
       cin>>s;
       for(int i=0;i<s;i++)
       {
              int size;
              cin>>size;
              vector<int> arr(size);
              for(int j=0;j<size;j++) cin >> arr[j];
              map<vector<int>,int>  count1;
              map<vector<int>,int>  count2;
              long long an=0;
              for(int j=2;j<size;j++)
              {
                 long long  val=count1[{0,arr[j-1],arr[j]}]+count1[{arr[j-2],0,arr[j]}]+count1[{arr[j-2],arr[j-1],0}];
                 val-=3*count2[{arr[j-2],arr[j-1],arr[j]}];
                 an+=val;
                 count1[{0,arr[j-1],arr[j]}]++;
                 count1[{arr[j-2],0,arr[j]}]++;
                 count1[{arr[j-2],arr[j-1],0}]++;
                 count2[{arr[j-2],arr[j-1],arr[j]}]++;
              }  

           cout<<an<<endl;
                 
        }
  return 0;
 
}
