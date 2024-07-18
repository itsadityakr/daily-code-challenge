#include <iostream>
using namespace std;

void nForest(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
// Output: 
// * * *
// * * *
// * * *

void n2Forest(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
// Output: 
// * 
// * * 
// * * *

void nTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
// Output: 
// 1 
// 1 2 
// 1 2 3 

void n2Triangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}
// Output: 
// 1 
// 2 2 
// 3 3 3 

void seeding(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }
}
// Output: 
// * * * 
// * * 
// * 

void nNumberTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
// Output: 
// 1 2 3 
// 1 2 
// 1 

void nStarTriangle(int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
// Output: 
//   * 
//  *** 
// ***** 

void n2StarTriangle(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for(int j = 2 * i - 1; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}
// Output: 
// ***** 
//  *** 
//   * 

void nStarDiamond(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for(int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n - 1; i >= 1; i--) {
        for(int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for(int j = 2 * i - 1; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}
// Output: 
//   * 
//  *** 
// ***** 
// ***** 
//  *** 
//   * 

void n3StarTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i < n; i++) {
        for(int j = n - i; j >= 1; j--) {
            cout << "*";
        }
        cout << endl;
    }
}
// Output: 
// * 
// ** 
// *** 
// ** 
// * 

#include <iostream>
using namespace std;

void nBinaryTriangle(int n) {
    int start = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
// Output: 
// 1 
// 0 1 
// 1 0 1 

void numberCrown(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        for(int j = i - 2; j >= 0; j--) {
            cout << " ";
        }
        for(int j = i - 2; j >= 0; j--) {
            cout << " ";
        }
        for(int j = n - i + 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}
// Output: 
// 1         1 
// 1 2     2 1 
// 1 2 3 3 2 1 

void n2NumberTriangle(int n) {
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}
// Output: 
// 1 
// 2 3 
// 4 5 6 

void nLetterTriangle(int N) {
    for(int i = 0; i < N; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
// Output: 
// A 
// A B 
// A B C 

void n2LetterTriangle(int n) {
    for(int i = n - 1; i >= 0; i--) {
        for(char j = 'A'; j <= 'A' + i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
// Output: 
// A B C 
// A B 
// A 

void alphaRamp(int n) {
    for(int i = 0; i < n; i++) {
        char letter = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << letter << " ";
        }
        cout << endl;
    }
}
// Output: 
// A 
// B B 
// C C C 

void alphaHill(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        for(char ch = 'A'; ch <= 'A' + i - 1; ch++) {
            cout << ch << " ";
        }
        for(char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
// Output: 
//     A 
//   A B A 
// A B C B A 

void alphaTriangle(int n) {
    for(int i = 0; i < n; i++) {
        char letter = 'A' + n - 1 - i;
        for(char ch = 'A' + n - 1; ch >= letter; ch--) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
// Output: 
// C 
// C B 
// C B A 

void symmetry(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << "* ";
        }
        for(int j = 1; j < i; j++) {
            cout << "  ";
        }
        for(int j = 1; j < i; j++) {
            cout << "  ";
        }
        for(int j = n; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        for(int j = n; j > i; j--) {
            cout << "  ";
        }
        for(int j = n; j > i; j--) {
            cout << "  ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
// Output: 
// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 

void symmetry2(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        for(int j = i + 1; j < n; j++) {
            cout << "  ";
        }
        for(int j = i + 1; j < n; j++) {
            cout << "  ";
        }
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 1; i < n; i++) {
        for(int j = i; j < n; j++) {
            cout << "* ";
        }
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }
        for(int j = i; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
// Output: 
// *         * 
// * *     * * 
// * * * * * * 
// * *     * * 
// *         * 

void getStarPattern(int n) {
    for(int i = 1; i <= n; i++) {
        if(i == 1 || i == n) {
            for(int j = 0; j < n; j++) {
                cout << "*";
            }
            cout << endl;
        } else {
            cout << "*";
            for(int j = 0; j < n - 2; j++) {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
}
// Output: 
// **** 
// *  * 
// *  * 
// **** 

void getNumberPattern(int n) {
    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int bottom = j;
            int right = (2 * n - 2) - j;
            int left = (2 * n - 2) - i;
            cout << n - min(min(top, bottom), min(left, right));
        }
        cout << endl;
    }
}
// Output: 
// 4444444 
// 4333334 
// 4322234 
// 4321234 
// 4322234 
// 4333334 
// 4444444 

int main() {
    cout << "nForest:" << endl;
    nForest(3);
    cout << endl;

    cout << "n2Forest:" << endl;
    n2Forest(3);
    cout << endl;

    cout << "nTriangle:" << endl;
    nTriangle(3);
    cout << endl;

    cout << "n2Triangle:" << endl;
    n2Triangle(3);
    cout << endl;

    cout << "seeding:" << endl;
    seeding(3);
    cout << endl;

    cout << "nNumberTriangle:" << endl;
    nNumberTriangle(3);
    cout << endl;

    cout << "nStarTriangle:" << endl;
    nStarTriangle(3);
    cout << endl;

    cout << "n2StarTriangle:" << endl;
    n2StarTriangle(3);
    cout << endl;

    cout << "nStarDiamond:" << endl;
    nStarDiamond(3);
    cout << endl;

    cout << "n3StarTriangle:" << endl;
    n3StarTriangle(3);
    cout << endl;

    cout << "nBinaryTriangle:" << endl;
    nBinaryTriangle(3);
    cout << endl;

    cout << "numberCrown:" << endl;
    numberCrown(3);
    cout << endl;

    cout << "nNumberTriangle:" << endl;
    nNumberTriangle(3);
    cout << endl;

    cout << "nLetterTriangle:" << endl;
    nLetterTriangle(3);
    cout << endl;

    cout << "n2LetterTriangle:" << endl;
    n2LetterTriangle(3);
    cout << endl;

    cout << "alphaRamp:" << endl;
    alphaRamp(3);
    cout << endl;

    cout << "alphaHill:" << endl;
    alphaHill(3);
    cout << endl;

    cout << "alphaTriangle:" << endl;
    alphaTriangle(3);
    cout << endl;

    cout << "symmetry:" << endl;
    symmetry(3);
    cout << endl;

    cout << "symmetry2:" << endl;
    symmetry2(3);
    cout << endl;

    cout << "getStarPattern:" << endl;
    getStarPattern(4);
    cout << endl;

    cout << "getNumberPattern:" << endl;
    getNumberPattern(4);
    cout << endl;

    return 0;
}