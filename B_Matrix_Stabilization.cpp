#include <bits/stdc++.h>
using namespace std;
void  check(vector<vector<int>>& grid,int r,int c)
{
       vector<vector<int>> arr={{1,0},{-1,0},{0,1},{0,-1}};
       bool flag=true;
       int val=grid[r][c];
       int m=-1;
       for(int i=0;i<4;i++)
       { 
              int m1=arr[i][0]+r;
              int m2=arr[i][1]+c;
              if(m1>=0 && m2>=0 && m1<grid.size() && m2<grid[0].size()) m=max(m,grid[m1][m2]);
              if(m1>=0 && m2>=0 && m1<grid.size() && m2<grid[0].size() && grid[m1][m2]>=val) {
              flag=false;
              return;
       }
}
if(flag)
{
       grid[r][c]=m;
}
}
int main() {
       int n;
       cin>>n;
       while(n--)
       {
              int r,c;
              cin>>r>>c;
              vector<vector<int>> arr(r,vector<int>(c));
              for(int i=0;i<r;i++)
              {
                     for(int j=0;j<c;j++)
                     {
                            cin>>arr[i][j];
                     }
              }
             for(int i=0;i<r;i++)
              {
                     for(int j=0;j<c;j++){
                       check(arr,i,j);
                       cout<<arr[i][j]<<" ";
                     }
                     cout<<endl;
              }

       }
       return 0;
}