class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preOrder;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left==NULL){
                preOrder.push_back(curr->val);
                curr=curr->right;
            }
            
            else{
                TreeNode* prev=curr->left;
                while(prev->right && prev->right!=curr){
                    prev=prev->right;
                }
                
                if(prev->right==NULL){
                    prev->right=curr;
                    preOrder.push_back(curr->val);
                    curr=curr->left;
                }
                
                else if(prev->right==curr){
                    prev->right=NULL;
                    curr=curr->right;
                }
            }
        }
        return preOrder;
    }
};