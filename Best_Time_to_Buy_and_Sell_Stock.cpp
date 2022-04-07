class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans = 0;
        int prv = prices[0];
        int n = prices.size();
        for(int i=1;i<n;i++)
        {
            prv = min(prv,prices[i]);
            ans = max(ans,prices[i]-prv);
        }
        return ans;
        
    }
};