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