// _297_Find_the_maximum_and_minimum_element_in_an_array.cpp

vector<int> minMax(vector<int> &arr)
{
    vector<int> result(2);
    int max = INT_MIN;
    int min = INT_MAX;

    for (int x : arr) {
        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }
    }

    result[0] = min;
    result[1] = max;

    return result;
}

// result = [1,9]
