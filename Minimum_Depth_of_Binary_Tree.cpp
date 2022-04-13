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
    int minDepth(TreeNode* root) {
        
        if (root==NULL)
        {
            return 0;
        }
        if (root->left==NULL && root->right==NULL)
        {
            return 1;
        }
        if (root->left==NULL)
        {
            return 1+minDepth(root->right);
        }
        if (root->right==NULL)
        {
            return 1+minDepth(root->left);
        }
        
        return 1+ min(minDepth(root->left),minDepth(root->right));
        
    }

   int minDepth(TreeNode* root) {
        
        if (root==NULL)
        {
            return 0;
        }
        queue<TreeNode*>que;
        que.push(root);
        int ans = 0;
        while(!que.empty())
        {
            int n = que.size();
            for(int i=0;i<n;i++)
            {
                auto nod = que.front();
                que.pop();
                if (nod->left==NULL && nod->right==NULL)
                {
                    return 1+ans;
                }
                if (nod->left!=NULL)
                {
                    que.push(nod->left);
                }
                if (nod->right!=NULL)
                {
                    que.push(nod->right);
                }
            }
            ans++;
        }
        return ans;
            
        
    }
};