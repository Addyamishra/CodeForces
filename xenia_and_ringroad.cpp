#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main() {
       long long houses,tasks;
       cin>>houses>>tasks;
       long long time=0;
       long long prev=1;
       for(int i=0;i<tasks;i++)
       {
              int curr;
              cin>>curr;
              if(curr==prev) continue;
              if(curr<prev)
              {
                     int full=houses-prev;
                     time+=(full+curr);
              }
              else{
               time+=(curr-prev);
              }
              prev=curr;
       }
       cout<<time;
       return 0;
}