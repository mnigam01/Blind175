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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> v;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            int n = que.size();
            long long int sum = 0;                     // earlier I was storing the ans in int even below I was multiplying by (1ll) still storing in int will lead to overflow
            for(int i=0;i<n;i++)
            {
                auto nod = que.front();
                que.pop();
                sum= (1ll)*sum+nod->val;            // here
                if (nod->left!=NULL)
                {
                    que.push(nod->left);
                }
                if (nod->right!=NULL)
                {
                    que.push(nod->right);
                }
            }
            
            v.push_back(1.0*sum/n);
        }
        return v;
        
    }
};