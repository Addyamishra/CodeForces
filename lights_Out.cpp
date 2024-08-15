#include<iostream>
#include<vector>
using namespace std;

int main() {
    int mat[3][3];
    vector<vector<int>> final(3, vector<int>(3, 1)); // Corrected initialization of vector

    // Input matrix values
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    int moves[6][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}}; // Corrected declaration of 2D array

    // Process the matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(mat[i][j] > 0) {
                int ch = (mat[i][j] % 2 == 0) ? 1 : 0; // Corrected parity check
                for(auto &move : moves) { // Using range-based for loop
                    int r = i + move[0];
                    int c = j + move[1];
                    if(r >= 0 && c >= 0 && r < 3 && c < 3) {
                        final[r][c] = ch;
                    }
                }
            }
        }
    }

    // Output the final matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << final[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
