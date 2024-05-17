// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/cip-unordered-map/problem/tie-breaker

class Solution{
    public:
        string TieBreak(string names[], int n)
        {
            unordered_map<string, int> votes;
            string max_candidate = "";
            int max_votes = INT_MIN;

            for(int i = 0; i < n; i++) {
                votes[names[i]]++;
                if(votes[names[i]] > max_votes || (votes[names[i]] == max_votes && names[i] < max_candidate)) {
                    max_candidate = names[i];
                    max_votes = votes[names[i]];
                }
            }
            return max_candidate;
        }
};