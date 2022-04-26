class Solution {
public:


    // see solution 3 and comment of last_resort user for explanation on time and space complexity
    // https://leetcode.com/problems/longest-consecutive-sequence/discuss/1254638/Short-and-Easy-Solution-w-Explanation-or-O(N)-Solution-with-comments-using-hashset
    
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> set;
        int n = nums.size();
        for(auto i:nums)
        {
            set.insert(i);
        }
        int maxLen = 0;
        for(auto i:nums)
        {
            if (set.find(i-1)==set.end())
            {
                int len = 0;
                while (set.find(i++)!=set.end())
                {
                    
                    len++;
                   
                }
                maxLen = max(maxLen,len);
                
            }
        }
        return maxLen;
        
    }
};