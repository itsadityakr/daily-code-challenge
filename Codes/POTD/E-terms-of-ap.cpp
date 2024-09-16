/*__________________________PROBLEM__________________________*/
/*
Terms Of AP
Easy

Problem statement
Ayush is given a number ‘X’. He has been told that he has to find the first ‘X’ terms of the series 3 * ‘N’ + 2, which are not multiples of 4. Help Ayush to find it as he has not been able to answer.

Example: Given an ‘X’ = 4. The output array/list which must be passed to Ayush will be [ 5, 11, 14, 17 ].

Detailed explanation ( Input/output format, Notes, Images )

Constraints:
1 <= T <= 10^2
1 <= X <= 10^5

Time Limit: 1 sec

Sample Input 1:
2
2
5
Sample Output 1:
5 11
5 11 14 17 23
Explanation For Sample Input 1:
In the first test case, the first number is 5, while the second number cannot be 8 as it is divisible by 4, and so, the next number is directly 11 as it is not divisible by 4.

In the second test case, the first two numbers are 5 and 11. While following three numbers are 14, 17 and 23 for ‘N’ = 4, 5 and 7 respectively. 20 is divisible by 4, and thus, 20 cannot be included in the list.

Sample Input 2:
2
7
8
Sample Output 2:
5 11 14 17 23 26 29
5 11 14 17 23 26 29 35
Explanation For Sample Input 2:
In the first test case, the first five numbers are 5, 11, 14, 17 and 23. While the following two numbers are 26 and 29 for N = 8 and 9 respectively.

In the second test case, the seven numbers are explained in the above test case and for N = 10, we get the number 32, which is divisible by 4 and thus, we reject it. For N = 11, the number is 35 and is not divisible by 4.
*/

/*__________________________PROGRAM__________________________*/

#include <bits/stdc++.h>
using namespace std;

vector<int> termsOfAP(int x) {
    vector<int> result;
    int N = 1;
    while (result.size() < x) {
        int term = 3 * N + 2;
        if (term % 4 != 0) {
            result.push_back(term);
        }
        N++;
    }
    return result;
}

int main() {
    int x = 10; // Number of terms to generate
    vector<int> apTerms = termsOfAP(x);

    for (int term : apTerms) {
        cout << term << " ";
    }
    cout << endl;

    return 0;
}

/*
N = 1: term = 3 * 1 + 2 = 5. 5 % 4 != 0, so add 5 to result. result = [5]
N = 2: term = 3 * 2 + 2 = 8. 8 % 4 == 0, so skip it. result = [5]
N = 3: term = 3 * 3 + 2 = 11. 11 % 4 != 0, so add 11 to result. result = [5, 11]
N = 4: term = 3 * 4 + 2 = 14. 14 % 4 != 0, so add 14 to result. result = [5, 11, 14]
N = 5: term = 3 * 5 + 2 = 17. 17 % 4 != 0, so add 17 to result. result = [5, 11, 14, 17]
*/