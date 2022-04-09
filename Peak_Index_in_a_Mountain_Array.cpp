class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int l = 0, r = arr.size()-1;
        int ans = 0;
        while(l<=r)
        {
            int m = l+(r-l)/2;
            if (arr[m]<arr[m+1])
            {
                l = m+1;
            }
            else
            {
                ans = m;
                r = m-1;
            }
        }
        return ans;
        
    }
};