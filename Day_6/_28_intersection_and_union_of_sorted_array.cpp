// https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            result.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return result;
}

vector<int> findArrayUnion(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            result.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n) {
        result.push_back(arr1[i]);
        i++;
    }
    while (j < m) {
        result.push_back(arr2[j]);
        j++;
    }
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for (int i = 0; i < n; i++) cin >> arr1[i];
    for (int i = 0; i < m; i++) cin >> arr2[i];
    vector<int> intersectionResult = findArrayIntersection(arr1, n, arr2, m);
    if (intersectionResult.empty()) cout << "-1";
    else for (int i : intersectionResult) cout << i << " ";
    cout << endl;
    vector<int> unionResult = findArrayUnion(arr1, n, arr2, m);
    for (int i : unionResult) cout << i << " ";
    cout << endl;
    return 0;
}