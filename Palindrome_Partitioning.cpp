class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> vec;
        helper(s,vec,0,{});
        return vec;
        
    }
    void helper(string &s, vector<vector<string>> &vec,int i,vector<string> tmp)
    {
        if (i>=s.size())
        {
            vec.push_back(tmp);
            return ;
        }
        for(int j=i;j<s.size();j++)
        {
            if (isPalindrome(s,i,j))
            {
                tmp.push_back(s.substr(i,j-i+1));
                
                helper(s,vec,j+1,tmp);
                tmp.pop_back();
            }


        }
    }



    bool isPalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};