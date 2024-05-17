// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/maximum-occured-integer4602

class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
        int a[maxx+1]={},ans=0;
        for(int i=0;i<n;i++){
            a[L[i]]++; a[R[i]+1]--;
        }
        int maxi=a[0];
        for(int i=0;i<=maxx;i++) {
            a[i]+=a[i-1];
            if(a[i]>maxi){
                maxi=a[i]; ans=i;
            }
        }
        return ans;   
        }
};