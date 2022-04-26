class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> vec;
        if (n<=0 || k<=0 || n<k)
        {

            return vec;
        }
        helper(vec,{},1,n,k);

        return vec;
        
    }
    
    void helper(vector<vector<int>> &vec, vector<int> tmp,int i,int &n,int &k)
    {


        if (tmp.size()==k)
        {

            vec.push_back(tmp);
            return ;
        }

        for(int ll=i;ll<=n;ll++)
        {
            tmp.push_back(ll);
            helper(vec,tmp,ll+1,n,k);
            tmp.pop_back();
        }



    }


    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> vec;
        vector<int>p(k,0);
        int i = 0;

//It matters in which order you write your if else in this question. lets say
// you are on last index and n has become n+1 you inserted it. now your last 
// element is n+1. now start a pass again. you see if else if is condition is 
// above it will go inside that because i is last index. and keep going it.
        while(i>=0)
        {
            p[i]++;
            if (p[i]>n)
            {
                --i;
            }
            
            else if (i==k-1)
            {
                vec.push_back(p);
            }
           
            else
            {
                ++i;
                p[i] = p[i-1];
            }
        }

        return vec;
        
    }

};