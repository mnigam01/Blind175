class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        int y=0,z=0;
        if (n==1)
        {
            return nums[0];
        }
        return max(helper(nums,0,n-2),helper(nums,1,n-1));
        
    }
    int helper(vector<int>& nums,int i,int j)
    {
        int y=0,z=0;
        for(int ll=j;ll>=i;ll--)
        {
            int t = max(nums[ll]+z,y);
            z = y;
            y = t;
        }
        return y;
    }
};