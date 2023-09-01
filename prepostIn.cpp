vector<vector<int>>ans;
    vector<int>preorder;
    vector<int>postorder;
    vector<int>inorder;
     if((root->left == NULL && root->right == NULL) || root == NULL){

        return {{}};

    }
    stack<pair<TreeNode*,int>>s;
    s.push({root,1});
    while(!s.empty()){
        auto it=s.top();
        s.pop();
        
        if(it.second==1){
            preorder.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->left!=NULL)
              s.push({it.first->left, 1});
        }

        else if(it.second==2){
            inorder.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->right!=NULL)
              s.push({it.first->right, 1});
        }

        else if (it.second==3) {
           postorder.push_back(it.first->data);
           
        }
    }
    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);
    return ans;
}
