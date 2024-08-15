#include <iostream>
#include <vector>
using namespace std;
vector<int> createBeautifulArray(int size) {
    vector<int> beautifulArray;
    for (int index = 1; index <= size; ++index) {
        beautifulArray.push_back(index * (index + 1)); 
    }
    return beautifulArray;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;
        vector<int> resultArray = createBeautifulArray(arraySize);
        for (int i = 0; i < arraySize; ++i) {
            cout << resultArray[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
