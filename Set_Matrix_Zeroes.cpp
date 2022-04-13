class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        
        
        int m = mat.size();
        int n = mat[0].size();
        
        vector<int> v1(m,-1),v2(n,-1);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (mat[i][j]==0)
                {
                    v1[i] = 0;
                    v2[j] = 0;
                }
            }
        }
        
        for(int i=0;i<m;i++)
        {
            if (v1[i]==0)
            {
                for(int j=0;j<n;j++)
                {

                    mat[i][j] = 0;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if (v2[i]==0)
            {
                for(int j=0;j<m;j++)
                {

                    mat[j][i] = 0;
                }
            }
        }
        
        
    }


   void setZeroes(vector<vector<int>>& mat) {
        
        
        int m = mat.size();
        int n = mat[0].size();
        
        int topleft = 1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (mat[i][j]==0)
                {
                    mat[0][j]=0;
                    if (i==0)
                    {
                        topleft = 0;
                    }
                    else
                    {
                        mat[i][0] = 0;
                    }
                }
            }
        }
        
        for(int i=1;i<m;i++)
        {
            if (mat[i][0]==0)
            {
                for(int j=0;j<n;j++)
                {
                    mat[i][j] = 0;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if (mat[0][i]==0)
            {
                for(int j=0;j<m;j++)
                {
                    mat[j][i] = 0;
                }
            }
        }
        if (topleft==0)
        {
            for(int i=0;i<n;i++)
            {
                mat[0][i] = 0;
            }
        }
    }
};