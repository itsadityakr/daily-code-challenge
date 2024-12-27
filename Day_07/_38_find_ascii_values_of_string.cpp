#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> getAsciiValues(const string& str) {
    vector<int> ascii_values(str.length());
    for (int i = 0; i < str.length(); i++) {
        ascii_values[i] = (int)str[i];
    }
    return ascii_values;
}

int main() {
    string str;
    cin >> str;
    
    vector<int> ascii_values = getAsciiValues(str);
    
    for (int i = 0; i < ascii_values.size(); i++) {
        cout << ascii_values[i] << " ";
    }
    
    return 0;
}
