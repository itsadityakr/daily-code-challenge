// https://www.naukri.com/code360/problems/longest-common-prefix_2090383?leftPanelTabValue=PROBLEM

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &arr, int n) {
    if (n == 0) return "";
    sort(arr.begin(), arr.end());
    string first = arr[0], last = arr[n - 1];
    int i = 0;
    while (i < first.size() && i < last.size() && first[i] == last[i]) i++;
    return first.substr(0, i);
}

int main() {
    int N;
    cin >> N;
    vector<string> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];
    cout << longestCommonPrefix(arr, N) << endl;
    return 0;
}
