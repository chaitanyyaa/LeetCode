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
    vector<int> v;
    int kthSmallest(TreeNode* root, int k) {
            
     enter(root);
        return v[k-1];
    }
    void enter(TreeNode *n){
        if(!n)
            return;
        enter(n->left);
        v.push_back(n->val);
        enter(n->right);
    }
};