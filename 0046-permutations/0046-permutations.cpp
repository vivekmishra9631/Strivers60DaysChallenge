class Solution {
    
private:
    void permutation(vector<int>& nums,int vis[],vector<int>&temp,vector<vector<int>>&ans,int n){
            if(temp.size()==n){
                ans.push_back(temp); 
                return;
            }
           
       
        for (int i = 0; i <n; i++) {
        if (!vis[i]) {
          temp.push_back(nums[i]);
          vis[i] = 1;
          permutation(nums,vis,temp,ans,n);
          vis[i] = 0;
          temp.pop_back();
        }
      }
        
        
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        int n=nums.size();
        int vis[n];
        for(int i=0;i<n;i++){
            vis[i]=0;
        }
        sort(nums.begin(),nums.end());
        permutation(nums,vis,temp,ans,n);
        return ans;
    }
};