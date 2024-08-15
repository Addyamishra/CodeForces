#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// DFS to find the size of connected component
int dfs(vector<vector<char>>& grid, int i, int j) {
    int n = grid.size();
    int m = grid[0].size();
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] != '#') {
        return 0;
    }
    grid[i][j] = '.'; // Mark cell as visited
    int size = 1;
    for (const auto& dir : directions) {
        size += dfs(grid, i + dir.first, j + dir.second);
    }
    return size;
}

// Function to find the maximum possible size of the largest connected component
int maxConnectedComponentSize(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int maxComponentSize = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                maxComponentSize = max(maxComponentSize, dfs(grid, i, j));
            }
        }
    }
    return maxComponentSize;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        // Read the grid
        vector<vector<char>> grid(n, vector<char>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }

        // Try setting each row to '#' and calculate the size of resulting connected component
        vector<int> rowSizes(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '.') {
                    vector<vector<char>> newGrid = grid;
                    for (int k = 0; k < m; ++k) {
                        newGrid[i][k] = '#';
                    }
                    rowSizes[i] = max(rowSizes[i], maxConnectedComponentSize(newGrid));
                }
            }
        }

        // Try setting each column to '#' and calculate the size of resulting connected component
        vector<int> colSizes(m);
        for (int j = 0; j < m; ++j) {
            for (int i = 0; i < n; ++i) {
                if (grid[i][j] == '.') {
                    vector<vector<char>> newGrid = grid;
                    for (int k = 0; k < n; ++k) {
                        newGrid[k][j] = '#';
                    }
                    colSizes[j] = max(colSizes[j], maxConnectedComponentSize(newGrid));
                }
            }
        }

        // Output the maximum size obtained
        int maxSize = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                maxSize = max(maxSize, max(rowSizes[i], colSizes[j]));
            }
        }
        cout << maxSize << endl;
    }

    return 0;
}
