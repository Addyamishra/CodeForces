
#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
   int fr;
   cin>>fr;
   int fingers=0;;
   for(int i=0;i<fr;i++)
   {
       int as;
       cin>>as;
       fingers+=as;
   }   
   int start_danger=1;
   int multi=fr+1;
   vector<int> store;
   for(int i=1;i<(fr+1)*5;i+=multi) store.push_back(i);
   int total=0;
   for(int i=1;i<=5;i++)
   {
if(find(store.begin(), store.end(), i + fingers) == store.end()) total++;

   }



   cout<<total; 
}