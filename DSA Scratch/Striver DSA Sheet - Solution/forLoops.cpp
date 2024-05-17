//First u need to understand what is Fibonacci Series
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() { 
    int currentFib = 1; 
    int previousFib = 1; 
    int result = 0; 
    int term; 
    cin >> term; 
    if (term == 0) { 
        result = 0;
    } else if (term == 1 || term == 2) { 
        result = 1;
    } else { 
        for (int i = 3; i <= term; i++) { 
            result = currentFib + previousFib;
            previousFib = currentFib;
            currentFib = result;
        }
    }
    cout << result; 
}
