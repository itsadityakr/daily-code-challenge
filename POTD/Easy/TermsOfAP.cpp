#include <bits/stdc++.h>
using namespace std;

vector<int> termsOfAP(int x) {
    vector<int> result;
    int N = 1;
    while (result.size() < x) {
        int term = 3 * N + 2;
        if (term % 4 != 0) {
            result.push_back(term);
        }
        N++;
    }
    return result;
}

int main() {
    int x = 10; // Number of terms to generate
    vector<int> apTerms = termsOfAP(x);

    for (int term : apTerms) {
        cout << term << " ";
    }
    cout << endl;

    return 0;
}

/*
termsOfAP Function:

Purpose: Generates the first x terms of an arithmetic progression (AP) where each term follows the formula 3*N + 2, excluding terms divisible by 4.
Process:
Initializes N to 1.
Continuously calculates the term using 3*N + 2.
Checks if the term is not divisible by 4. If so, adds it to the result vector.
Increments N and continues until x terms are collected.
main Function:

Sets the number of terms to generate (x = 10 in this case).
Calls termsOfAP to get the terms.
Prints the terms to the console.
*/