class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans = nums[0];
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            sum = max(sum,nums[i]);
            ans = max(ans,sum);
        }
        return ans;
        
    }
};