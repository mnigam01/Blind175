class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if (dfs(board,i,j,word))
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    // if I pass by value in below line the function makes copy of board
    // each time. It's not wrong but copying the values leads to time limit exceeded
    // also you can uncomment a cout in code to see i and j value that will also lead to tle
    
    bool dfs(vector<vector<char>> &board, int i, int j, string word)
    {
        if (word.size()==0)
        {
            return true;
        }
        if (i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[0])
        {
            return false;
        }
        auto c = board[i][j];
        board[i][j] = '*';
        auto s = word.substr(1);
        // cout << i<<" "<<j<<endl;
        bool res = dfs(board,i+1,j,s) || dfs(board,i-1,j,s) ||dfs(board,i,j+1,s) ||dfs(board,i,j-1,s); 
        board[i][j] = c;
        return res;
    }
};