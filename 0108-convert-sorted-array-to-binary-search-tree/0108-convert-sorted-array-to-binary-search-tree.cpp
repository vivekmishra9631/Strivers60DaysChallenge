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
    TreeNode* makeTree(vector<int>&nums, int i,int j){
        if(i>j)return NULL;
        
        int mid=j+(i-j)/2;
        TreeNode* node=new TreeNode(nums[mid]);
        node->left=makeTree(nums,i,mid-1);
        node->right= makeTree(nums,mid+1,j);
        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return NULL;
        int i=0;
        int j=n-1;
        return makeTree(nums,i,j);
        
        
       
    }
};