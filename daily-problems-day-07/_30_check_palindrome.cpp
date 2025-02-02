// https://www.naukri.com/code360/problems/check-palindrome_4219630?leftPanelTabValue=PROBLEM
// https://leetcode.com/problems/valid-palindrome/description/
#include<iostream>
#include<String>
#include<unordered_map>

#define endl "\n"
using namespace std;

string formatString(string s) {
    string formatted = "";
    
    for (char c : s) {
        if (isalnum(c)) {
            formatted += tolower(c);
        }
    }
    return formatted;
}

string reverseString(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        swap(s.at(i), s.at(j));
        i++;
        j--;
    }
    return s;
}

bool isPalindrome(string s) {
    return formatString(s) == reverseString(formatString(s));
}

int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s);
}