class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<int>s1,s2;
        for(char i:s)
        {
            if (i=='#' && !s1.empty())
            {
                s1.pop();
            }
            else if (i!='#')
            {
                s1.push(i);
            }
        }
        
        for(char i:t)
        {
            if (i=='#' && !s2.empty())
            {
                s2.pop();
            }
            else if (i!='#')
            {
                s2.push(i);
            }
        }
        
        if (s1.size()!=s2.size())
        {
            return false;
        }
        int n = s1.size();
        for(int i=0;i<n;i++)
        {
            if (s1.top()!=s2.top())
            {
                return false;
            }
            s1.pop();s2.pop();
        }
        return true;
        
    }



   bool backspaceCompare(string s, string t) {
        
        int back;
        int s1_right = s.size()-1;
        int s2_right = t.size()-1;
        while(s1_right>=0 || s2_right>=0)
        {
            back = 0;
            while(s1_right>=0 && (back>0 || s[s1_right]=='#'))
            {
                if (s[s1_right]=='#')
                {
                    back++;
                }
                else back--;
                s1_right--;
            }
            
            // cout << s1_right<<endl;
            
            back = 0;
            while(s2_right>=0 && (back>0 || t[s2_right]=='#'))
            {
                if (t[s2_right]=='#')
                {
                    back++;
                }
                else back--;
                s2_right--;
            }
            // cout << s2_right<<endl;
            
           
            if (s1_right>=0 && s2_right>=0 && s[s1_right]==t[s2_right])
            {
                s1_right--;s2_right--;
            }
            else
                break;
            
        }
        if (s1_right==-1 && s2_right==-1)
        {
            return true;
        }
        return false;
        
    }
};