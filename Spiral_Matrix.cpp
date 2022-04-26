class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        
        int m = mat.size(), n = mat[0].size();
        int l = 0, r = n, t = 0, b = m;
        vector<int> v;
        while(l<r && t<b)
        {
            for(int i=l;i<r;i++)
            {
                v.push_back(mat[t][i]);
            }
            t++;
            for(int i=t;i<b;i++)
            {
                v.push_back(mat[i][r-1]);
            }
            r--;
            if (l>=r || t>=b)
            {
                return v;
            }
            
            for(int i=r-1;i>=l;i--)
            {
                // cout << b << " "<< i<<endl;
                v.push_back(mat[b-1][i]);
            }
            b--;
            for(int i=b-1;i>=t;i--)
            {
                v.push_back(mat[i][l]);
            }
            l++;
            
       
            
        }
        return v;
        
        
        
        
    }
};