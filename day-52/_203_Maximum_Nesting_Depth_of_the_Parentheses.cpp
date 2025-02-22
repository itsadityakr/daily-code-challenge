// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

class Solution {
    public:
        int maxDepth(string s) {
            int count = 0, result = 0;
    
            for(int i=0; i<s.length(); i++){
                if(s[i] == '(')
                    count++;
                else if(s[i] == ')'){
                    result = max(result, count);
                    count--;
                }
            }
    
            return result;
        }
    };
