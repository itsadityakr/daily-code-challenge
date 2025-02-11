// https://leetcode.com/problems/rotate-string/description/

class Solution {
    public:
        void leftRotate(string& s) {
            int n = s.length();
            if (n == 0)
                return;
    
            char firstChar = s[0];
            for (int i = 0; i < n - 1; ++i) {
                s[i] = s[i + 1];
            }
            s[n - 1] = firstChar;
        }
    
        bool rotateString(string s, string goal) {
            if (s.length() != goal.length())
                return false;
    
            int n = s.length();
            for (int i = 0; i < n; ++i) {
                leftRotate(s);
                if (s == goal)
                    return true;
            }
            return false;
        }
    };