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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        else if(!p||!q) return false;
        stack<pair<TreeNode*, TreeNode*>> stack;
        stack.push({p,q});
        while(!stack.empty()){
            TreeNode* node1 = stack.top().first; TreeNode* node2 = stack.top().second;
            stack.pop();
            if(!node1 && !node2) ;
            else if(!node1 || !node2) return false;
            else if(node1->val != node2->val) return false;
            if(node1){
            stack.push({node1->left, node2->left});
            stack.push({node1->right, node2->right}); 
            }
        }
        return true;
    }
};