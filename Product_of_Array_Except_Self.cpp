class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // int pref = 1;
        int n = nums.size();
        vector<int> v(n);
        v[0] = 1;
        for(int i=1;i<n;i++)
        {
            v[i] = v[i-1]*nums[i-1];
        }
        int post = 1;
        for(int i=n-1;i>=0;i--)
        {
            v[i]= v[i]*post;
            post *=nums[i];
        }
        return v;
        
    }
};