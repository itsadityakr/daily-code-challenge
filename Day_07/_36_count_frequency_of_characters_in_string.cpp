#include <iostream>
#include <vector>
#include <string>
using namespace std;

void countCharacterFrequency(const string& str) {
    vector<int> freq(26, 0);
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << ": " << freq[i] << endl;
        }
    }
}

int main() {
    string str;
    cin >> str;
    countCharacterFrequency(str);
    return 0;
}
