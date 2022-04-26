class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> vec;
        helper(nums,vec,0,{});
        return vec;
        
        
    }
    
    void helper(vector<int>& nums,vector<vector<int>> &vec,int i,vector<int> tmp)
    {
        if(i>=nums.size())
        {
            vec.push_back(tmp);
            return ;
        }
        tmp.push_back(nums[i]);
        helper(nums,vec,i+1,tmp);
        tmp.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1])
        {
            i++;
        }
                
        helper(nums,vec,i+1,tmp);
    }
};