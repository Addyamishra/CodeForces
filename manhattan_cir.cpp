#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       for(int i=0;i<t;i++)
       {
         int r,c;
         cin>>r>>c;
         bool flag=false;
         vector<vector<char>> grid(r,vector<char>(c,'.'));
         int col=-1;
         int row=-1;
         for(int i=0;i<r;i++)
         {
              for(int j=0;j<c;j++)
              {
                     cin>>grid[i][j];
                     if(!flag && grid[i][j]=='#'){
                            col=j;
                            row=i;
                            flag=true;
                     }
              }
         }
           int row_b=row;
           int col_b=col;
           while( row_b<r && grid[row_b][col]=='#')
           {
              row_b++;
           }
           row_b--;
           int ans_r=(row+row_b)/2;
           int ans_c=col;
           cout<<ans_r+1<<" "<<ans_c+1<<endl;
       }
       return 0;
}