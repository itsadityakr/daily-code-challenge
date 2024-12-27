// https://leetcode.com/problems/string-to-integer-atoi/description/
#include<iostream>
#include<String>

#define endl "\n"
using namespace std;

int myAtoi(string s) {
        int i=0,num=0;
        char sign = '+';

        while(i<s.size() && s[i]==' ')
            i++;
        if (i<s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = s[i];
            i++;
        } 
        while(i<s.size() && isdigit(s[i])) {
            int n = s[i] - '0';
            if((num > INT_MAX/10 || (num == INT_MAX/10 && n>7)))
                return (sign == '+' ? INT_MAX : INT_MIN);
            num = num*10+n;
            i++;
        }
        if(sign == '-')
            return -num;
        return num;
}

int main(){
    string s;
    cin>>s;
    cout<<myAtoi(s);
}