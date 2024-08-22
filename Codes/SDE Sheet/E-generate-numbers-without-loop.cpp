#include <vector>
#include <iostream>
using namespace std;

vector<int> generateNumbers(int x) {
    if (x == 1) {
        return {1};
    }
    vector<int> result = generateNumbers(x - 1);
    result.push_back(x);
    return result;
}

vector<int> printNos(int x) {
    return generateNumbers(x);
}

int main() {
    int n;
    cin >> n;
    vector<int> result = printNos(n);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
