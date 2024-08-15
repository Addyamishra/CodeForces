#include <iostream>
#include <array>

int main() {
    const int numDays = 7;
    int numPages;
    std::cin >> numPages;

    std::array<int, numDays> weekPages = {0};
    int total = 0;

    for (int& pages : weekPages) {
        std::cin >> pages;
        total += pages;
    }

    numPages %= total;
    if (numPages == 0) {
        numPages = total;
    }

    int k;
    for (k = 0; k < numDays; ++k) {
        if (numPages <= 0) {
            break;
        }
        numPages -= weekPages[k];
    }

    std::cout << k << std::endl;
    
    return 0;
}
