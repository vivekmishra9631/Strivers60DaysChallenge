class Solution {
    
void solve(vector<int>& nums,int n,int ind,vector<vector<int>>&ans,vector<int>& temp){
    
        ans.push_back(temp);
        
    
     
    for(int i=ind; i<n;i++ ){
       if(i>ind &&nums[i]==nums[i-1]) continue;
         temp.push_back(nums[i]);
        solve(nums,n,i+1,ans,temp);
        temp.pop_back();
         
    }
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        int n= nums.size();
        sort(nums.begin(),nums.end());
        solve(nums,n,0,ans,temp);
        return ans;
    }
};