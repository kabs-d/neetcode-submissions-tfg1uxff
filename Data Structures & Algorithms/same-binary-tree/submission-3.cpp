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
        queue<TreeNode*> q_p;
        queue<TreeNode*> q_q;
        if(!p && !q) return true;
        else if(!p||!q) return false;
        q_p.push(p); q_q.push(q);
        TreeNode* curr_p=p; TreeNode* curr_q=q;
        while(!q_p.empty()&&!q_q.empty()){
            curr_p=q_p.front(); curr_q=q_q.front();
            q_p.pop(); q_q.pop();
            if(curr_p->val!=curr_q->val) return false;
            if(curr_p->left && curr_q->left){
                q_p.push(curr_p->left);
                q_q.push(curr_q->left);
            }
            else if(!(!curr_p->left && !curr_q->left) && (curr_p->left || curr_q->left)) return false;
            if(curr_p->right && curr_q->right){
                q_p.push(curr_p->right);
                q_q.push(curr_q->right);
            }
            else if(!(!curr_p->right && !curr_q->right) && (curr_p->right || curr_q->right)) return false;
        }
        return true;
    }
};