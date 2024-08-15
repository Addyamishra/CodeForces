#include <bits/stdc++.h>
using namespace std;
void rotate2DVector(std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    // Rotate each row to the left by one position
    for (int i = 0; i < rows; ++i) {
        int temp = matrix[i][0];
        for (int j = 0; j < cols - 1; ++j) {
            matrix[i][j] = matrix[i][j + 1];
        }
        matrix[i][cols - 1] = temp;
    }
    
    // Rotate each column down by one position
    for (int j = 0; j < cols; ++j) {
        int temp = matrix[0][j];
        for (int i = 0; i < rows - 1; ++i) {
            matrix[i][j] = matrix[i + 1][j];
        }
        matrix[rows - 1][j] = temp;
    }
}
bool areEqual2DVectors(const std::vector<std::vector<int>>& matrix1, const std::vector<std::vector<int>>& matrix2) {
    // Check dimensions first
    if (matrix1.size() != matrix2.size() || matrix1[0].size() != matrix2[0].size()) {
        return false;
    }
    
    // Check each element
    int rows = matrix1.size();
    int cols = matrix1[0].size();
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return false;
            }
        }
    }
    
    return true;
}
int main() {
       int t;
       cin>>t;
       while(t--){
              int n,m;
              cin>>n>>m;
              vector<vector<int>> arr(n,vector<int>(m,0));
              for(int i=0;i<n;i++){
                 for(int j=0;j<m;j++){
                     cin>>arr[i][j];
                 }
              }
              rotate2DVector(arr);
              if(m==1 && n==1) cout<<-1<<endl;
              else{
                      for(int i=0;i<n;i++){
                 for(int j=0;j<m;j++){
                  cout<<arr[i][j];
                  if(j!=m-1) cout<<" ";
                 }
                 cout<<endl;
                 }
              }
              

       }
       return 0;
}