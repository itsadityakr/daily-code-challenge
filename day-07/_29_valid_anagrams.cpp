// https://leetcode.com/problems/valid-anagram/
#include<iostream>
#include<String>
#include<unordered_map>

#define endl "\n"
using namespace std;

bool isAnagram(string str1, string str2) {

    if (str1.length() != str2.length()) return false;
    unordered_map<char, int> charCountMap;

    for (int i = 0; i < str1.length(); i++) {
        charCountMap[str1[i]]++;
    }

    for (int i = 0; i < str2.length(); i++) {
        if (charCountMap[str2[i]] == 0) return false; //
        --charCountMap[str2[i]];
    }

    return true;
}

int main(){
    string s,t;
    cin>>s>>t;
    cout<<isAnagram(s,t);
}