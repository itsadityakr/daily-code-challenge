// https://www.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/0

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        map <int, int> trade;
        vector<vector<int>> trades;
        
        int l=0, h=0;
        for (int i=1; i<n; i++){
            if (A[i]>A[h]){
                h=i;
                trade[l]=h;
            }
            else if (A[i]<A[h]){
                l=i;
                h=i;
            }
        }
        for (auto &i:trade){
            trades.push_back({i.first,i.second});
        }
        return trades;
    }
};