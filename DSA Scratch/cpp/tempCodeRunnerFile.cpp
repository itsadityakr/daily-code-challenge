#include <iostream>
using namespace std;

class Patterns {
public:
    static void nForest(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    static void n2Forest(int n) {
        for(int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    static void nTriangle(int n) {
        for(int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    static void n2Triangle(int n) {
        for(int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    static void seeding(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = n; j >= i; j--) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    static void nNumberTriangle(int n) {
        for(int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i + 1; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    static void nStarTriangle(int N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                cout << " ";
            }
            for(int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    static void n2StarTriangle(int n) {
        int i, j;
        for(i = n; i > 0; i--) {
            for(j = n - i; j > 0; j--) {
                cout << " ";
            }
            for(j = 2 * i - 1; j > 0; j--) {
                cout << "*";
            }
            cout << endl;
        }
    }

    static void nStarDiamond(int n) {
        for(int i = 1; i <= n; i++){
            for(int j = n - i; j > 0; j--){
                cout << " ";
            }
            for(int j = 0; j < 2 * i - 1; j++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i = n; i >= 1; i--){
            for(int j = n - i; j > 0; j--){
                cout << " ";
            }
            for(int j = 2 * i - 1; j > 0; j--){
                cout << "*";
            }
            cout << endl;
        }
    }

    static void n3StarTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i=1;i<n;i++){
            for(int j=n-i;j>=1;j--){
                cout << "*";
            }
            cout << endl;
        }
    }

    static void nBinaryTriangle(int n) {
        int start = 1;
        for(int i = 0;i<n;i++){
            if(i%2==0) start = 1;
            else start=0;
            for(int j=0;j<=i;j++){
                cout << start;
                start = 1-start;
            }
            cout << endl;
        }
    }

    static void numberCrown(int n) {
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n-i+1;j++){
                cout << j << " ";
            }
            for(int j=i-2;j>=0;j--){
                cout << " ";
            }
            for(int j=i-2;j>=0;j--){
                cout << " ";
            }
            for(int j=n-i+1;j>=1;j--){
                cout << j << " ";
            }
            cout << endl;
        }
    }

    static void n2NumberTriangle(int n) {
        int num = 1;
        for(int i=1;i<=n;i++){
            for(int j = 1;j<=i;j++){
                cout << num << " ";
                num = num+1;
            }
            cout << endl;
        }
    }

    static void nLetterTriangle(int n) {
        for(int i=0;i<n;i++){
            for(char ch = 'A'; ch<='A'+i;ch++){
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    static void n2LetterTriangle(int n) {
        for(int i=n;i>=1;i--){
            for(char j = 'A';j<='A'+i;j++){
                cout << j << " ";
            }
            cout << endl;
        }
    }

    static void alphaRamp(int n) {
        for(int i=0;i<n;i++){
            char letter = (char) ('A' + i);
            for (int j = 0; j <= i; j++) {
                cout << letter << " ";
            }
            cout << endl;
        }
    }

    static void alphaHill(int n) {
        for(int i=1;i<=n;i++){
            for(int j=n;j>i;j--){
                cout << " ";
            }
            for(char ch ='A';ch<='A'+i-1;ch++){
                cout << ch << " ";
            }
            for (char ch = (char) ('A' + i - 2); ch >= 'A'; ch--) {
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    static void alphaTriangle(int n) {
        for (int i = 0; i < n; i++) {
            char letter = (char) ('A' + n - 1 - i);
            for (char ch = (char)('A' + n - 1); ch >= letter; ch--) {
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    static void symmetry(int n) {
        for(int i=1;i<=n;i++){
            for(int j=n;j>=i;j--){
                cout << "* ";
            }
            for(int j=1;j<i;j++){
                cout << "  ";
            }
            for(int j=1;j<i;j++){
                cout << " ";
            }
            for(int j=n;j>=i;j--){
                cout << "* ";
            }
            cout << endl;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout << "* ";
            }
            for(int j=n;j>i;j--){
                cout << "  ";
            }
            for(int j=n;j>i;j--){
                cout << "  ";
            }
            for(int j=0;j<i;j++){
                cout << "* ";
            }
            cout << endl;
        }
    }

    static void symmetry2(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout << "* ";
            }
            for(int j=i+1;j<n;j++){
                cout << "  ";
            }
            for(int j=i+1;j<n;j++){
                cout << "  ";
            }
            for(int j=0;j<=i;j++){
                cout << "* ";
            }
            cout << endl;
        }
        for(int i=1;i<n;i++){
            for(int j=i;j<n;j++){
                cout << "* ";
            }
            for(int j=0;j<i;j++){
                cout << "  ";
            }
            for(int j=0;j<i;j++){
                cout << "  ";
            }
            for(int j=i;j<n;j++){
                cout << "* ";
            }
            cout << endl;
        }
    }

    static void getStarPattern(int n) {
        for(int i=1;i<=n;i++){
            if(i==1 || i==n){
                for(int j=0;j<n;j++){
                    cout << "*";
                }
                cout << endl;
            }
            else{
                for(int j=0;j<1;j++){
                    cout << "*";
                }
                for(int j=0;j<n-2;j++){
                    cout << " ";
                }
                for(int j=0;j<1;j++){
                    cout << "*";
                }
                cout << endl;
            }
        }
    }

    static void getNumberPattern(int n) {
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top = i;
                int bottom = j;
                int right = (2*n - 2) - j;
                int left = (2*n - 2) - i;
                cout << n - min(min(top,bottom), min(left,right)) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n = 3;
    Patterns::nForest(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::n2Forest(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::nTriangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::n2Triangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::seeding(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::nNumberTriangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::nStarTriangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::n2StarTriangle(n);       
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::nStarDiamond(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::n3StarTriangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::nBinaryTriangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::numberCrown(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::n2NumberTriangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::nLetterTriangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::n2LetterTriangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::alphaRamp(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::alphaHill(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::alphaTriangle(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::symmetry(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::symmetry2(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::getStarPattern(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    Patterns::getNumberPattern(n);
    cout << "-=-=-=-=-=-=-=-" << endl;
    return 0;
}
