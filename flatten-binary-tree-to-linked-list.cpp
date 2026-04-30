class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        
        while (curr) {
            if (curr->left) {
                TreeNode* prev = curr->left;
                
                // Find rightmost node
                while (prev->right) {
                    prev = prev->right;
                }
                
                // Rewire connections
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            
            curr = curr->right;
        }
    }
};
