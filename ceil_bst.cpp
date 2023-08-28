int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans=-1;
    while(node){
        if(x==node->data){
            ans=node->data;
            return ans;
        }
        else if(x<node->data){
            ans=node->data;
            node=node->left;
        }

        else node=node->right;
    }
    return ans;
}
