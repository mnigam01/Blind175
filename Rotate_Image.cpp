class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        
        int l = 0, r = mat.size();
        
        while(l<r)
        {
            int t = l, b = r;
            
            for(int i=0;i<r-l-1;i++)
            {
                
                int topleft = mat[t][l+i];
                
                mat[t][l+i] = mat[b-1-i][l];
                mat[b-1-i][l] = mat[b-1][r-1-i];
                mat[b-1][r-1-i] = mat[t+i][r-1];
                mat[t+i][r-1] = topleft;
                
                
            }
            l++;
            r--;
        }
        
        
    }


    void rotate(vector<vector<int>>& mat) {
        
        int l = 0, r = mat.size()-1;
        
        reverse(mat.begin(),mat.end());
        
        for(int i=0;i<r;i++)
        {
            for(int j=i+1;j<=r;j++)
            {
                // cout << i<< " "<<j<<" "<<r<<endl;
                swap(mat[i][j],mat[j][i]);
            }
        }
        
    }

/*
 * clockwise rotate
 * first reverse up to down, then swap the symmetry 
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
*/


/*
 * anticlockwise rotate
 * first reverse left to right, then swap the symmetry
 * 1 2 3     3 2 1     3 6 9
 * 4 5 6  => 6 5 4  => 2 5 8
 * 7 8 9     9 8 7     1 4 7
*/
 	
};