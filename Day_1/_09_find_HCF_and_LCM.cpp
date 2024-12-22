// lcm and hcf are calcualted of 2 or more numbers

#include <iostream>
#include <vector>
using namespace std;

int calculateHCF(int a, int b) {
    int minNum = (a < b) ? a : b;
    int hcf = 1;
    for (int i = 1; i <= minNum; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}

int calculateLCM(int a, int b) {
    return (a * b) / calculateHCF(a, b);
}

int findHCFOfArray(const vector<int>& arr) {
    int hcf = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        hcf = calculateHCF(hcf, arr[i]);
    }
    return hcf;
}

int findLCMOfArray(const vector<int>& arr) {
    int lcm = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        lcm = calculateLCM(lcm, arr[i]);
    }
    return lcm;
}

int main() {
    vector<int> arr = {10, 12, 15};
    cout << findHCFOfArray(arr) << endl;
    cout << findLCMOfArray(arr) << endl;
    return 0;
}
