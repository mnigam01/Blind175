class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        vector<int> v(amount+1,INT_MAX-1);
        v[0] = 0;
        
        for(int i=1;i<=amount;i++)
        {
            for(auto j:coins)
            {
                if (i-j>=0)
                {
                    v[i] = min(v[i],1+v[i-j]);
                }
            }
        }
        if (v[amount]==INT_MAX-1)
        {
            return -1;
        }
        return v[amount];
        
    }
};