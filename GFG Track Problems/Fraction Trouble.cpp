// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/fraction-trouble3803

class Solution {
  public:
    vector<int> LargestFraction(int n, int d) {
        // code here
        int a=(10000*n)/d;
        int b=10000;
        double t=(double)n/d;
        double m=0;
        int nu,den;
        while(a>0)
        {
          double f = (double)a/b;
          if(f>=t)
          {
              a--;
          }
          else
          {
              if(f>m && __gcd(a,b)==1)
              {
                  m=f;
                  nu=a;
                  den=b;
              }
              b--;
          }
        }
        return {nu,den};
    }
};