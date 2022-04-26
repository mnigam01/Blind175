class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vec;
        helper(nums,vec,0);
        return vec;
        
    }

// I'm changing the original array it would be better if i can pass it by value, 
// but it will copy the entire array hence time consuming, to get around this,
// see you operate on rest of the array then swap back to its original state.
    void helper(vector<int>&nums,vector<vector<int>>&vec,int i)
    {
        if (i>=nums.size())
        {
            vec.push_back(nums);
            return ;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            helper(nums,vec,i+1);
            swap(nums[i],nums[j]);
        }
    }


   // https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
   // https://leetcode.com/problems/permutations/discuss/18247/My-elegant-recursive-C%2B%2B-solution-with-inline-explanation

};