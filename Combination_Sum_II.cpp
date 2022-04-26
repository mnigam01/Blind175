class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
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
         for(int ll = i;ll<candidates.size();ll++)
         {
             if (ll!=i && candidates[ll-1]==candidates[ll]) continue;
             
            tmp.push_back(candidates[ll]);
            helper(candidates,target,sum+candidates[ll],ll+1,tmp,vec);
            tmp.pop_back();
         }
        
        
    }

// 2nd method
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
        helper(candidates,target,sum+candidates[i],i+1,tmp,vec);
        tmp.pop_back();
        while(i+1<candidates.size()  && candidates[i]==candidates[i+1]) i++;
       
        helper(candidates,target,sum,i+1,tmp,vec);
    }
};