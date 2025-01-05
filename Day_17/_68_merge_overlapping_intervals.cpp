// https://leetcode.com/problems/merge-intervals/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for (const auto& interval : intervals) {
        if (merged.empty() || merged.back()[1] < interval[0]) merged.push_back(interval);
        else merged.back()[1] = max(merged.back()[1], interval[1]);
    }
    return merged;
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    for (const auto& interval : merge(intervals)) cout << "[" << interval[0] << "," << interval[1] << "] ";
}
