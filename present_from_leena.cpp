#include <bits/stdc++.h>
using namespace std;
bool check( vector<vector<int>> arr,int i,int j)
{
       int a[][2]={{1,0},{0,1},{0,-1},{-1,0}};
       for(int k=0;k<4;k++)
       {
          int r=a[k][0]+i;
          int c=a[k][1]+j;
          if(r>=0 && r<arr.size() && c>=0 && c<arr.size() && arr[r][c]!=0) return true; 
       }
       return false;
}
void print( vector<vector<int>> arr,int n)
{
       for(int i=0;i<n*2+3;i++)
       {
              for(int j=0;j<n*2+3;j++)
              { 
                     if(j-1>=0 && arr[i][j-1]==1 && arr[i][j]==0) 
                     {
                       cout<<arr[i][j];
                       break;
                     }
                     
                     if(arr[i][j]==0 && check(arr,i,j)) 
                     {     if(i==0 || i==n*2+2)
                           { 
                            cout<<arr[i][j];
                            break;
                           }
                           else cout<<arr[i][j]<<" "; 
                     }
                     else if(arr[i][j]==0) cout<<" "<<" ";           
                     else cout<<arr[i][j]<<" ";
              }
              cout<<endl;
       }
}
int main() {
       int n;
       cin>>n;
        n--;
        vector<vector<int>> arr(n*2+1,vector<int>(n*2+1,0));
        int r=0;
        int c=n;
        for(int i=0;i<n*+1;i++)
        {
              if(r+i<n*2+1 && c-i>=0)arr[r+i][c-i]=1;
              if(r+i<n*2+1 && c+n<n*2+1)arr[r+i][c+i]=1;
        }
        r=n*2;
        c=n;
        for(int i=0;i<n*+1;i++)
        {
              if(r-i>=0 && c-i>=0)arr[r-i][c-i]=1;
              if(r-i>=0 && c+n<n*2+1)arr[r-i][c+i]=1;
        }
        arr[n][0]=1;
        arr[n][n*2]=1;

         
        for(int i=0;i<n*2+1;i++)
        {
              int sum=0;
              int incr=0;
              for(int j=0;j<=n;j++)
              {
                if(arr[i][j]==1) incr=1;
                 sum+=incr;
                 arr[i][j]=sum;
              }
        }
         for(int i=0;i<n*2+1;i++)
        {
              int sum=0;
              int incr=0;
              for(int j=n*2;j>=n*2-n;j--)
              {
                if(arr[i][j]==1) incr=1;
                 sum+=incr;
                 arr[i][j]=sum;
              }
        }

      vector<vector<int>>  ans(n*2+3,vector<int>(n*2+3,0));
      for(int i=1;i<=n*2+1;i++)
      {
       for(int j=1;j<=n*2+1;j++)
       {
        ans[i][j]=arr[i-1][j-1];
       }
      }

        print(ans,n);
        return 0;
}