class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int ans = 0;
        int buy = prices[0];
        for(int i=1;i<n;i++)
        {
            if (prices[i]>buy)
            {
                ans = max(ans,prices[i]-buy);
            }
            else if (prices[i]<buy)
            {
                buy = prices[i];
            }
        }
        return ans;
        
    }
};
