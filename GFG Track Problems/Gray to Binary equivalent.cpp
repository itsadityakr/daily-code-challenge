// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-BitMagic/problem/gray-to-binary-equivalent-1587115620

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here

//if n - 0 and 1
        if(n==0) return 0;
        if(n==1) return 1;
        
        vector<int>gray;
        while(n>0){
            int r = n % 2;
            gray.push_back(r);
            n/=2;
        }
        // reverse gray code array
        reverse(gray.begin(),gray.end());
        
        int a  = gray[0];
        for(int i = 1; i < gray.size() ; i++){
            gray[i] = gray[i]^a;
            a=gray[i];
        }
        
        long value = 0;
        for(int i = 0 ; i<gray.size() ; i++){
            value += gray[i]*pow(2,(gray.size()-1)-i);
        }
        return value;
    }
        
};