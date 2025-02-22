#include<iostream>
#include<String>

#define endl "\n"
using namespace std;

bool containsOnlyDigits(string &s) {
    for (char c : s) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    cout<<containsOnlyDigits(s);
}