class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n= nums.size();
        
        if(n<=2){
            return n;
        }
        
        unordered_map<int,int>dp[n+1];
        int ans=0;
        
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                int diff=nums[i]-nums[j];
                int count=1;
                if(dp[j].count(diff)){
                    count+=dp[j][diff];
                    dp[i][diff]=count;
                }
                else
                {
                    dp[i][diff]=1+count;
                }
                
                ans= max(ans, dp[i][diff]);
            }
            
        }
        return ans;
    }
};