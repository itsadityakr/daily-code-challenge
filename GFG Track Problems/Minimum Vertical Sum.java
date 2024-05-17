// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/cip-java-arraylist/problem/minimum-vertical-sum-1593518814

public static int minimum_vertical_sum(ArrayList<ArrayList<Integer>> arr)
    {
        // Determine the maximum number of columns
        int maxCols = 0;
        for (ArrayList<Integer> list : arr) {
            if (list.size() > maxCols) {
                maxCols = list.size();
            }
        }

        // Initialize an array to hold the vertical sums
        int[] verticalSums = new int[maxCols];
        
        // Calculate the vertical sums
        for (ArrayList<Integer> list : arr) {
            for (int j = 0; j < list.size(); j++) {
                verticalSums[j] += list.get(j);
            }
        }
        
        // Find the minimum vertical sum
        int minVerticalSum = Integer.MAX_VALUE;
        for (int sum : verticalSums) {
            if (sum < minVerticalSum) {
                minVerticalSum = sum;
            }
        }
        
        return minVerticalSum;
    }