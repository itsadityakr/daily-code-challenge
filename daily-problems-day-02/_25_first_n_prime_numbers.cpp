#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

vector<int> primeNums(int n) {
    vector<int> primes;
    int num = 2;
    while (primes.size() < n) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
        num++;
    }
    return primes;
}

int main() {
    int n;
    cin >> n;
    vector<int> new_vec = primeNums(n);
    for (auto element : new_vec) {
        cout << element << " ";
    }
    return 0;
}
