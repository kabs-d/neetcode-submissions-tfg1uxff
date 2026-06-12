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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q; vector<vector<int>> res;
        TreeNode* curr= root; q.push(root); 
        while(!q.empty()){
            vector<int> vec;
            int size=q.size();
            for(int i=0; i<size; i++){
                curr=q.front();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                vec.push_back(curr->val);
                q.pop();
            }
            res.push_back(vec);
        }
        return res;
    }
};