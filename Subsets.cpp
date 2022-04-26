class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> vec;
        
        helper(vec,nums,0,{});     
        return vec;
        
        
        
    }
    
    void helper(vector<vector<int>> &vec, vector<int>& nums,int i, vector<int> tmp)
    {
        
        if (i>=nums.size())
        {
            vec.push_back(tmp);
            return ;
        }
        
        tmp.push_back(nums[i]);
        helper(vec,nums,i+1,tmp);
        tmp.pop_back();
        helper(vec,nums,i+1,tmp);
        
    }

	//https://leetcode.com/problems/subsets/discuss/381670/c%2B%2B-backtracking-solution-with-comments
};