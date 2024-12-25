// https://www.naukri.com/code360/problems/intersection_result-of-2-arrays_1082149?leftPanelTabValue=PROBLEM
#include <iostream>
#include <vector>
using namespace std;

void findIntersection(vector<int> &A, vector<int> &B) {
    int n = A.size(), m = B.size();
    int i = 0, j = 0;
    vector<int> intersection_result;
    while (i < n && j < m) {
        if (A[i] == B[j]) {
            intersection_result.push_back(A[i]);
            i++;
            j++;
        } else if (A[i] < B[j]) {
            i++;
        } else {
            j++;
        }
    }
    if (!intersection_result.empty()) {
        for (int val : intersection_result) {
            cout << val << " ";
        }
        cout << endl;
    } else {
        cout << "-1" << endl;
    }
}

void findUnion(vector<int> &A, vector<int> &B) {
    int n = A.size(), m = B.size();
    int i = 0, j = 0;
    vector<int> unionResult;
    while (i < n && j < m) {
        if (A[i] == B[j]) {
            unionResult.push_back(A[i]);
            i++;
            j++;
        } else if (A[i] < B[j]) {
            unionResult.push_back(A[i]);
            i++;
        } else {
            unionResult.push_back(B[j]);
            j++;
        }
    }
    while (i < n) {
        unionResult.push_back(A[i]);
        i++;
    }
    while (j < m) {
        unionResult.push_back(B[j]);
        j++;
    }
    for (int val : unionResult) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
        int n, m;
        cin >> n >> m;

        vector<int> A(n), B(m);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> B[i];
        }
        findIntersection(A, B);
        findUnion(A, B);

    return 0;
}
