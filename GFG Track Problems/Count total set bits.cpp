// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-BitMagic/problem/count-total-set-bits-1587115620

class Solution{
public:
    // Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Initialize the result to 0
        int count = 0;
        
        // Iterate through all bits from LSB to MSB
        for (int i = 0; (1 << i) <= n; i++) {
            // Number of pairs of 2^i in n
            int pairs = n / (1 << (i + 1));
            // Number of remaining bits after considering pairs
            int remainingBits = n - pairs * (1 << (i + 1));
            // Calculate count of set bits for this bit position
            count += pairs * (1 << i); // Count from pairs
            count += max(0, remainingBits - (1 << i) + 1); // Count remaining bits if necessary
        }
        
        return count;
    }
};