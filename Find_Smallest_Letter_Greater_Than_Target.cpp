class Solution {
public:
    char nextGreatestLetter(vector<char>& nums, char target) {
        
        int l = 0, r = nums.size()-1;
        auto ans = nums[0];
        while(l<=r)
        {
            int m = l+(r-l)/2;
            if (nums[m]<=target)
            {
                l = m+1;
            }
            else
            {
                ans = nums[m];
                r = m-1;
            }
        }
        return ans;
        
    }
};