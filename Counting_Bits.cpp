class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v(n+1,0);
        if (n>=1)
        {
            v[1] = 1;
        }
        int ind = 1;
        for (int i=2;i<=n;i++)
        {
            v[i] = v[ind];
            if(i+1<=n)
            {
                v[i+1] = 1 + v[ind++];
            }
            i++;
            
        }
        return v;
        
    }
};