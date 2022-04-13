class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& v, int m, int n) {
        
        int siz = v.size();
        if (siz!=m*n)
        {
            return {};
        }
        vector<vector<int>> vec(m,vector<int>(n));
        
        int tmp = 0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                vec[i][j] = v[tmp+j];
            }
            tmp+=n;
        }
        return vec;
        
        
        
    }
};