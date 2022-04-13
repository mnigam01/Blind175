class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        unordered_map<int,int> map;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            auto dif = target-nums[i];
            if(map.find(dif)!=map.end())
            {
                vec.push_back(map[dif]);
                vec.push_back(i);
                return vec;
            }
            map[nums[i]] = i;
        }
        return vec;
        
    }
};