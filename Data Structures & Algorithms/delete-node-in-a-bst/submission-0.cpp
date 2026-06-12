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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;
        if (key > root->val) {
    root->right = deleteNode(root->right, key);
    return root;
}
else if (key < root->val) {
    root->left = deleteNode(root->left, key);
    return root;
}
        else{
            if(!root->right && !root->left) return nullptr;
            else if(!root->left){
                return root->right;
            }
            else if(!root->right){
                return root->left;
            }
            else{
                TreeNode* curr=root->right;
                TreeNode*prev =root;
                while(curr->left){
                    prev=curr;
                    curr=curr->left;
                }
                if(prev!=root){
                    prev->left=curr->right;
                    curr->right=root->right;
                }
                curr->left=root->left;
                return curr;
            }

        }
    }
        
    
   
};