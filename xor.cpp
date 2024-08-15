#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;
};

void find_manhattan_triangle(const vector<Point>& points, int d) {
    // Group points by their x-coordinates and y-coordinates
    unordered_map<int, vector<int>> x_map, y_map;
    for (int i = 0; i < points.size(); i++) {
        x_map[points[i].x].push_back(i);
        y_map[points[i].y].push_back(i);
    }
    
    // Iterate through each pair of points with the same x-coordinate
    for (auto& pair : x_map) {
        vector<int>& x_indices = pair.second;
        for (int i = 0; i < x_indices.size(); i++) {
            for (int j = i + 1; j < x_indices.size(); j++) {
                int p1_index = x_indices[i];
                int p2_index = x_indices[j];
                int dist = abs(points[p1_index].y - points[p2_index].y);
                if (dist == d) {
                    cout << points[p1_index].x << " " << points[p1_index].y << endl;
                    cout << points[p2_index].x << " " << points[p2_index].y << endl;
                    for (auto& pair2 : y_map) {
                        vector<int>& y_indices = pair2.second;
                        for (int k = 0; k < y_indices.size(); k++) {
                            int p3_index = y_indices[k];
                            if (p3_index != p1_index && p3_index != p2_index) {
                                cout << points[p3_index].x << " " << points[p3_index].y << endl;
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
    
    // If no Manhattan triangle found
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    // Process each test case
    for (int i = 0; i < t; i++) {
        int n, d;
        cin >> n >> d;
        vector<Point> points(n);
        for (int j = 0; j < n; j++) {
            cin >> points[j].x >> points[j].y;
        }
        find_manhattan_triangle(points, d);
    }

    return 0;
}
