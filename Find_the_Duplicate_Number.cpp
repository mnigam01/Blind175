class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slw = 0;
        int fst = 0;
        
        while(true)
        {
            slw = nums[slw];
            fst = nums[nums[fst]];
            if (slw==fst)
            {
                break;
            }
        }
        int slw2 = 0;
        while(slw!=slw2)
        {
            slw = nums[slw];
            slw2 = nums[slw2];
        }
        return slw;
        
    }
};