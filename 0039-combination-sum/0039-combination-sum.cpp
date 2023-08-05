class Solution {
private:
    void solve(vector<int>& candidates, vector<int>&temp, vector<vector<int>>&ans,int target,int ind,int n){
        if(ind==n){
        if(target==0) ans.push_back(temp);
        return;
    }
        if(target >=candidates[ind]){
            temp.push_back(candidates[ind]);
            solve(candidates,temp,ans,target-candidates[ind],ind,n);
            temp.pop_back();
            
        }
        solve(candidates,temp,ans,target,ind+1,n);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        int n=candidates.size();
        solve(candidates,temp,ans,target,0,n);
        return ans;
    }
};