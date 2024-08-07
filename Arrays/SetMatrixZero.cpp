#include <bits/stdc++.h>
using namespace std;

void setMatrixOnes(vector<vector<int>> &MAT, int n, int m)
{
    vector<int> rowMarker(n, 0), colMarker(m, 0);

    // Step 1: Identify the rows and columns that should be set to 1.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (MAT[i][j] == 1) {
                rowMarker[i] = 1;
                colMarker[j] = 1;
            }
        }
    }

    // Step 2: Set the rows to 1 where the rowMarker is 1.
    for (int i = 0; i < n; i++) {
        if (rowMarker[i] == 1) {
            for (int j = 0; j < m; j++) {
                MAT[i][j] = 1;
            }
        }
    }

    // Step 3: Set the columns to 1 where the colMarker is 1.
    for (int j = 0; j < m; j++) {
        if (colMarker[j] == 1) {
            for (int i = 0; i < n; i++) {
                MAT[i][j] = 1;
            }
        }
    }
}

int main() {
    vector<vector<int>> MAT = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    int n = MAT.size();
    int m = MAT[0].size();

    setMatrixOnes(MAT, n, m);

    // Print the modified matrix.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << MAT[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
