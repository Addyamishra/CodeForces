#include <bits/stdc++.h>
using namespace std;

int main() {
       int friends,bottles,drinkperbottle,limes,lime_slices,salt,req_drink,req_salt;
       cin>>friends>>bottles>>drinkperbottle>>limes>>lime_slices>>salt>>req_drink>>req_salt;
       long long  drink_total=bottles*drinkperbottle;
       long long ans=0;
       long long  total_slice=lime_slices*limes;
       while(drink_total>=0 && salt>=0 && total_slice>=0)
       {
              if(drink_total-req_drink>=0 && salt-req_salt>=0 && total_slice-1>=0)
              {
                     drink_total-=req_drink;
                     salt-=req_salt;
                     total_slice-=1;
                     ans++;
              }
              else break;
       }
       
       cout<<(ans/friends);
       return 0;
}