class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> vec;
        helper(candidates,target,0,0,{},vec);
        return vec;
    }
    

    void helper(vector<int>& candidates, int &target, int sum,int i,vector<int>tmp,vector<vector<int>> &vec)
    {

	if (sum==target)
        {
            vec.push_back(tmp);
            return ;
        }
        if (i>=candidates.size() || sum>target)
        {
            return ;
            
        }
        

 // Here I'm at index i and i'm taking only index from i to last. Because the pre
 // vious indeces i-1 must have included i. This is the case was missing in NEETCODE
// explanation

        for(int j=i;j<candidates.size();j++)
        {
            tmp.push_back(candidates[j]);
            helper(candidates,target,sum+candidates[j],j,tmp,vec);
            tmp.pop_back();
            
        }
        
    }



// 2nd method as shown be NEETCODE
    void helper(vector<int>& candidates, int &target, int sum,int i,vector<int>tmp,vector<vector<int>> &vec)
    {
	if (sum==target)
        {
            vec.push_back(tmp);
            return ;
        }

        if (i>=candidates.size() || sum>target)
        {
            return ;
            
        }
        
        tmp.push_back(candidates[i]);
        helper(candidates,target,sum+candidates[i],i,tmp,vec);
        tmp.pop_back();
        helper(candidates,target,sum,i+1,tmp,vec);
    }
};