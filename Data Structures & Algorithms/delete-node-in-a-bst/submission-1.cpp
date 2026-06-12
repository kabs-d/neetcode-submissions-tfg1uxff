class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;

        TreeNode* curr = root;
        TreeNode* prev = nullptr;

        // Find node and parent
        while (curr) {
            if (curr->val == key) break;

            prev = curr;

            if (key > curr->val)
                curr = curr->right;
            else
                curr = curr->left;
        }

        if (!curr) return root; // key not found

        TreeNode* node = curr;

        // Case 1: no child
        if (!node->left && !node->right) {
            if (node == root) return nullptr;

            if (prev->left == node) prev->left = nullptr;
            else prev->right = nullptr;

            return root;
        }

        // Case 2: only right child
        if (!node->left) {
            if (node == root) return node->right;

            if (prev->left == node) prev->left = node->right;
            else prev->right = node->right;

            return root;
        }

        // Case 3: only left child
        if (!node->right) {
            if (node == root) return node->left;

            if (prev->left == node) prev->left = node->left;
            else prev->right = node->left;

            return root;
        }

        // Case 4: two children
        TreeNode* succParent = node;
        TreeNode* succ = node->right;

        while (succ->left) {
            succParent = succ;
            succ = succ->left;
        }

        // Remove successor from its old position
        if (succParent != node) {
            succParent->left = succ->right;
            succ->right = node->right;
        }

        succ->left = node->left;

        // Attach successor to node's parent
        if (node == root) {
            return succ;
        }

        if (prev->left == node) prev->left = succ;
        else prev->right = succ;

        return root;
    }
};