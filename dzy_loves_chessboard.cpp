#include <bits/stdc++.h>
using namespace std;

int main() {
       int n,m;
       cin>>n>>m;
       string grid[n][m];
       for(int i=0;i<n;i++)
       {   
              string str;
              cin>>str;
              for(int j=0;j<m;j++)
              {
                     grid[i][j]=str[j];
              }
       }
      string st="W";
      for(int i=0;i<n;i++)
       {
              st=(st=="W")?"B":"W";
              string nxt=(st=="W")?"B":"W";
              for(int j=0;j<m;j++)
              {
                    if(grid[i][j]==".")
                    {
                     grid[i][j]=nxt;
                    }
                    nxt=(nxt=="W")?"B":"W";
              }
       }
       

        for(int i=0;i<n;i++)
       {
              for(int j=0;j<m;j++)
              {
                     cout<<grid[i][j];
              }
              if(i<n-1) cout<<endl;
       }
       return 0;
}