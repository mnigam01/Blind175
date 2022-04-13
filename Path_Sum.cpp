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
    bool hasPathSum(TreeNode* root, int target) {
        
        if (root==NULL)
        {
            return false;
        }
        
        int sumTillNow = 0;
        return helper(root,sumTillNow,target);
          
        
    }
    
    bool helper(TreeNode* root,int sumTillNow,int target)
    {
        if (root==NULL)
        {
            return false;
        }
        sumTillNow = root->val + sumTillNow;
        if (root->left==NULL && root->right==NULL && sumTillNow==target)
        {
            return true;
        }
        
        return helper(root->left,sumTillNow,target) || helper(root->right,sumTillNow,target);
        
    }


	// Or simply this below one

    bool hasPathSum(TreeNode* root, int target) {
        
        if (root==NULL)
        {
            return false;
            
        }
        if (root->left==NULL && root->right==NULL && target-root->val==0)
        {
            return true;
        }
        
        return hasPathSum(root->left,target-root->val) || hasPathSum(root->right,target-root->val);
        
    }

};