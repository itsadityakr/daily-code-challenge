// https://leetcode.com/problems/sort-characters-by-frequency/

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> freqMap;
        for (char c : s)
        {
            freqMap[c]++;
        }

        priority_queue<pair<int, char>> maxHeap;
        for (const auto &entry : freqMap)
        {
            maxHeap.push({entry.second, entry.first});
        }

        string result;
        while (!maxHeap.empty())
        {
            auto [freq, ch] = maxHeap.top();
            maxHeap.pop();
            result.append(freq, ch);
        }

        return result;
    }
};