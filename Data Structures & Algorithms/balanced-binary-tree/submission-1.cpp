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
    bool isBalanced(TreeNode* root) {
        return !dfs(root).second;
        }
    pair<int,int> dfs(TreeNode* root){
        if(!root) return {0,0};
        pair<int,int> left=dfs(root->left);
        pair<int, int> right=dfs(root->right);
        int depth = 1+max(left.first, right.first);
        if(left.second||right.second||abs(left.first-right.first)>1) return {depth,1};
        else return {depth,0};   
        
    }
    
  
    
};