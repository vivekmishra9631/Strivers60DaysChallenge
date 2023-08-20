#include <bits/stdc++.h>
void solve(BinaryTreeNode<int> * root, vector<string>&temp,string s){
    
    
    if (root->left == NULL && root->right == NULL) {
        temp.push_back(s);
        return;
    }
    
    if(root->left)solve(root->left,temp,s+" "+to_string(root->left->data));
    if(root->right)solve(root->right,temp,s+" "+to_string(root->right->data));
    

}
vector <string> allRootToLeaf(BinaryTreeNode<int> * root) {
    // Write your code here.
    vector <string>ans;
    if(root==NULL){
        return ans;
        }
    
    solve(root,ans,to_string(root->data));
    return ans;
}
