// _299_Find_the_sum_of_all_elements_in_an_array.cpp

int sumArr (vector<int> arr){
    int sum = 0;
    for(int x:arr){
        sum += x;
    }
    return sum;
}

// arr = [1, 4, 3, 6, 2]
// sum = 16