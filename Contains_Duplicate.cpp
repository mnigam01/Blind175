class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int> set;
        for(auto i:nums)
        {
            if (set.find(i)==set.end())
            {
                set.insert(i);
            }
            else
            {
                return true;
            }
        }
        return false;
        
    }
};