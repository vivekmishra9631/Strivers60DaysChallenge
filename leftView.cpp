void leftVieww(Node* root, int level,vector<int>&ans){
    if(root==NULL) return;
    if(ans.size()==level) ans.push_back(root->data);
    leftVieww(root->left,level+1,ans);
    leftVieww(root->right,level+1,ans);
    
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   if(root==NULL) return ans;
   
   leftVieww(root,0,ans);
   return ans;
}
