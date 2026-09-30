class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inOrder(root, ans);
        return ans;
    }
    void inOrder(TreeNode* &root, vector<int> &ans){
        if(!root) return;
        if (root->left) 
            inOrder(root->left, ans);
        ans.push_back(root->val);
        if (root->right) {
            inOrder(root->right, ans);
        }
    }
};