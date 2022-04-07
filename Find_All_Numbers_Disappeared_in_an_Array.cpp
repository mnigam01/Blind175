class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int>set;
        for(int i=1;i<=n;i++)
        {
            set.insert(i);
        }
        for(int i=0;i<n;i++)
        {
            if (set.find(nums[i])!=set.end())
            {
                set.erase(nums[i]);
            }
        }
        vector<int> vec;
        for(auto i:set)
        {
            vec.push_back(i);
        }
        return vec;

    }

   // second way of doing the same thing
   vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int>set;
        
        for(int i=0;i<n;i++)
        {
            set.insert(nums[i]);
        }
        vector<int> vec;
        for(int i=1;i<=n;i++)
        {
            if (set.find(i)==set.end())
            {
                vec.push_back(i);
            }
        }
        
        return vec;
    }
};