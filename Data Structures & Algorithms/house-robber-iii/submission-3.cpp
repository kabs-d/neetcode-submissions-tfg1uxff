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
    int rob(TreeNode* root) {
        pair<int, int> res=dfs(root);
    return max(res.first, res.second);
    }
    pair<int,int> dfs(TreeNode* root){
        if(!root) return {0,0};
        pair<int, int> left_pair=dfs(root->left);
        pair<int, int> right_pair = dfs(root->right);
        int with_root=root->val+left_pair.second+right_pair.second;
        int without_root=max(left_pair.first, left_pair.second) + max(right_pair.first, right_pair.second);
        return {with_root, without_root};
    }
};