class Solution {
public:
    string longestPalindrome(string s) {

       int n = s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,0));
        for(int i=0;i<n;i++)
        {
            dp[i][i] = 1;
        }
        int ind = 0;
        int ans = 1;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                
                dp[i-1][i] = 1;
                ans = 2;
                ind = i;
               
            }
        }

        for(int i=n-2;i>=0;i--)
        {
            for(int j=i+2;j<n;j++)
            {
                
                if (s[i]==s[j])
                {
                    dp[i][j] = dp[i+1][j-1];
                }

                if (dp[i][j]==1 && j-i+1>ans)
                {
                    ind = j;
                    ans = j-i+1;
                }
            }
        }
        
        return s.substr(ind-ans+1,ans);

    }



    string longestPalindrome(string s) {

        int n = s.size();
        int start = 0;
        int end = 0;

        for(int i=1;i<n;i++)

        {
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r])
            {
                l--;
                r++;
            }
            if (r-l-2>end-start)
            {
                start = l+1;
                end = r-1;
            }
        }

        for(int i=0;i<n-1;i++)

        {
            int l=i,r=i+1;

            while(l>=0 && r<n && s[l]==s[r])
            {
                l--;
                r++;
            }
            if (r-l-2>end-start)
            {
                start = l+1;
                end = r-1;
            }
        }
        
        return s.substr(start,end-start+1);

    }
    
    
};