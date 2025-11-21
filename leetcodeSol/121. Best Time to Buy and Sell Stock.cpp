//121. Best Time to Buy and Sell Stock
//Leetcode Easy



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mxProf =0;
        int mini = prices[0];
        int n = prices.size();
        for(int i = 0; i<n ; i++){
            int cost = prices[i] -mini;
            mxProf = max(mxProf , cost);
            mini = min(mini , prices[i]);
        }
        return mxProf;
    }
};
