int floorInBST(TreeNode<int> * root, int key)
{
    // Write your code here.
    int ans=-1;
    while(root){
        if(root->val==key){
            ans=key;
            return ans;
        }
        if(key>root->val){
            ans=root->val;
            root=root->right;
            
        }

        else{
            root=root->left;
        }
    }
    return ans;
}
