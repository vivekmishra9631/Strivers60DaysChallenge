class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n= nums.size();
        map<int,int>mpp;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int b=target -a;
            if(mpp.find(b)!=mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[b]);
                break;
            }
            mpp[a]=i;
            
        }
        
        return ans;
    }
};