class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        inOrder(root, ans);
        return ans;
    }
    void inOrder(TreeNode* &root, vector<int> &ans){
        if(!root) return;
        ans.push_back(root->val);
        if (root->left) 
            inOrder(root->left, ans);
        if (root->right) {
            inOrder(root->right, ans);
        }
    }
};