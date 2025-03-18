// _300_Find_the_second_largest_and_second_smallest_element_(Sorting_required).cpp

vector<int> secondMinMax(vector<int> &arr) {
    if (arr.size() < 2) {
        return {-1, -1};
    }

    int max = INT_MIN, secondMax = INT_MIN;
    int min = INT_MAX, secondMin = INT_MAX;

    for (int x : arr) {
        if (x > max) {
            secondMax = max;
            max = x;
        } else if (x > secondMax && x != max) {
            secondMax = x;
        }

        if (x < min) {
            secondMin = min;
            min = x;
        } else if (x < secondMin && x != min) {
            secondMin = x;
        }
    }

    if (secondMin == INT_MAX) secondMin = -1;
    if (secondMax == INT_MIN) secondMax = -1;

    return {secondMin, secondMax};
}

// result = [1,9]
