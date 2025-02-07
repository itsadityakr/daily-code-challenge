// https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        
        while (ss >> word) {
            words.push_back(word);
        }
        
        reverse(words.begin(), words.end());
        return join(words, " ");
    }
    
private:
    string join(const vector<string>& words, const string& delimiter) {
        string result;
        for (const string& word : words) {
            if (!result.empty()) result += delimiter;
            result += word;
        }
        return result;
    }
};
