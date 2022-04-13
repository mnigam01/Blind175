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
    
    // third way of doing the same thing
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int>vec;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int ind = abs(nums[i])-1;
            if (nums[ind]>0)
            {
                nums[ind]*=-1;
            }
            
        }
        for(int i=0;i<n;i++)
        {
            if (nums[i]>0)
            {
                vec.push_back(i+1);
            }
        }
        return vec;
        
    }
};
