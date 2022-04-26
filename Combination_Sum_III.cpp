class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> vec;
        helper(n,k,{},vec,0,1);
        return vec;
        
    }
    
    void helper(int n,int k,vector<int>tmp,vector<vector<int>> &vec,int sum,int i)
    {
        if (sum==n && tmp.size()==k)
        {
            vec.push_back(tmp);
            return ;
        }
        if (tmp.size()==k || i>9)
        {
            return ;
            
        }
        
        for(int ll=i;ll<=9;ll++)
        {
            
            tmp.push_back(ll);
            helper(n,k,tmp,vec,sum+ll,ll+1);
            tmp.pop_back();
        }

    } 
};