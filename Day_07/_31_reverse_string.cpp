// https://www.naukri.com/code360/problems/reverse-the-string_799927
// https://leetcode.com/problems/reverse-string/description/

#include<iostream>
#include<String>

#define endl "\n"
using namespace std;

string reverseString(string reversed) {
    int i = 0, j = reversed.length() - 1;
    while (i < j) {
        swap(reversed.at(i), reversed.at(j));
        i++;
        j--;
    }
    return reversed;
}

int main(){
    string s;
    cin>>s;
    cout<<reverseString(s);
}