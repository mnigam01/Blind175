class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
        int l = 0,r = nums.size()-1;
        int index = r;
        vector<int> vec(nums.size());
        while(l<=r)
        {
            int a = nums[l]*nums[l];
            int b= nums[r]*nums[r];
            // cout << index<<endl;
            if (a<b)
            {
                vec[index--] = b;
                r--;
            }
            else
            {
                vec[index--] = a;
                l++;
            }
        }
        return vec;
        
        
    }
};