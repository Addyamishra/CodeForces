#include <iostream>
#include <vector>

// Function to convert a positive integer to ternary representation
std::vector<int> toTernary(int x) {
    std::vector<int> ternary;
    while (x != 0) {
        int remainder = x % 3;
        if (remainder == 2) {
            ternary.push_back(-1);
            x = x / 3 + 1;
        } else {
            ternary.push_back(remainder);
            x /= 3;
        }
    }
    if (ternary.empty()) {
        ternary.push_back(0);
    }
    return ternary;
}

// Function to solve the problem
std::pair<int, std::vector<int>> solve(int x) {
    if (x >= 0) {
        std::vector<int> ternary = toTernary(x);
        int n = ternary.size();
        return {n, ternary};
    } else {
        std::vector<int> ternary = toTernary(x + 1);
        int n = ternary.size();
        if (ternary[0] == -1) {
            ternary[0] = 0;
            ternary.push_back(-1);
        } else {
            ternary.insert(ternary.begin(), 0);
        }
        return {n + 1, ternary};
    }
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int x;
        std::cin >> x;

        auto result = solve(x);
        int n = result.first;
        std::vector<int> array = result.second;

        std::cout << n << std::endl;
        for (int i = 0; i < n; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
