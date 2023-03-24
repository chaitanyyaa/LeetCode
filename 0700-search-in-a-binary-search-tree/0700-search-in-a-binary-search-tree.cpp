class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(!root) return root;
       
        TreeNode *node=new TreeNode(); 
        
        // if root->val != val,search in left and right
       
        if(val<root->val){
            //search in left 
            node=searchBST(root->left,val);
            
        } else if(val>root->val){
            //search in right
            
            node=searchBST(root->right,val);
        } else {
            //required node
            node=root;
        }
        return node;
    }
};