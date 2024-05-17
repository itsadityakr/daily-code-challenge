//https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/cip-mutating-stl-algorithms/problem/fractional-knapsack-1587115620

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    static bool compare(Item a, Item b) {
        double ratioA = (double)a.value / a.weight;
        double ratioB = (double)b.value / b.weight;
        return ratioA > ratioB;
    }

    double fractionalKnapsack(int w, Item arr[], int n) {
        sort(arr, arr + n, compare);

        double totalValue = 0.0;

        for (int i = 0; i < n; i++) {
            if (arr[i].weight <= w) {
                totalValue += arr[i].value;
                w -= arr[i].weight;
            } else {
                double fraction = (double)w / arr[i].weight;
                totalValue += arr[i].value * fraction;
                break;
            }
        }

        return totalValue;
    }
};