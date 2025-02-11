#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> checkPrimeArray(const vector<int>& arr) {
    vector<int> result;
    for (int num : arr) {
        result.push_back(isPrime(num) ? 1 : 0);
    }
    return result;
}

int main() {
    vector<int> arr = {2, 3, 4, 5, 6, 7, 10, 13, 17, 20};
    
    vector<int> result = checkPrimeArray(arr);

    for (size_t i = 0; i < arr.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
