/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int maxi = 0;
        helper(root,maxi);
        return maxi;
        
        
    }
    int helper(TreeNode*root,int &maxi)
    {
        if (root==NULL)
        {
            return -1;
        }
        auto lh = helper(root->left,maxi);
        auto rh = helper(root->right,maxi);
        
        maxi = max(maxi,2+lh+rh);
        
        
        return 1+ max(lh,rh);
        
    }
};