// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-BitMagic/problem/maximum-and-value-1587115620

class Solution
{
public:
    // Function for finding maximum AND value.
    int checkBit(int pattern, int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if ((pattern & arr[i]) == pattern)
			count++;
	return count;
}

// Function for finding maximum and value pair
int maxAND(int arr[], int n)
{
	int res = 0, count;

	// iterate over total of 32bits from msb to lsb
	for (int bit = 31; bit >= 0; bit--) {
		// find the count of element having same pattern as
		// obtained by adding bits on every iteration.
		count = checkBit(res | (1 << bit), arr, n);

		// if count >= 2 set particular bit in result
		if (count >= 2)
			res = res | (1 << bit); // this is the pattern
									// we continued
	}

	return res;
}

};