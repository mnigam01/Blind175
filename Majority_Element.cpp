class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int maj = nums[0];
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if (count==0)
            {
                maj = nums[i];
            }
            if (nums[i]==maj)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return maj;
        
    }
};