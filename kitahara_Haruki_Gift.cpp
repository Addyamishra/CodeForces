#include <bits/stdc++.h>
using namespace std;

int main() {
       int n;
       cin>>n;
       int hund=0;
       int thund=0;
       for(int i=0;i<n;i++)
       {
         int a;
         cin>>a;
         if(a==200) thund+=a;
         else hund+=a;
       }
        if(((hund+thund)/2)%100!=0)
        {
              cout<<"NO";
              return 0;
        }
        int target=(hund+thund)/2;
        if(hund==target) 
        {
              cout<<"YES";
              return 0;
        }

        if(hund>target)
        {
            int free=hund-target;
            if(free+thund==target)
            {
              cout<<"YES";
              return 0;
            }
            else{
            cout<<"NO";
            return 0;}
        }
        else 
        {
               int free=thund-target;
            if(free+hund==target)
            {
              cout<<"YES";
              return 0;
            }
            else{
            cout<<"NO";
            return 0;
            }
        }
       return 0;
}
            