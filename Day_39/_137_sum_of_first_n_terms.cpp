// https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

class Solution
{
public:
    int sumOfSeries(int n)
    {
        if(n==1){
            return 1;
        }
        int sum = 0;
         return n * n * n + sumOfSeries(n - 1);
    }
};