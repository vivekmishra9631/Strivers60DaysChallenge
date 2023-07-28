class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0, cnt2=0;
        int el1;
        int el2;
        for(int i=0; i<n;i++){
            if(cnt1 ==0 && nums[i]!=el2){
                cnt1=1;
                el1=nums[i];
            }
             else if(cnt2 ==0 && nums[i]!=el1){
                cnt2=1;
                el2=nums[i];
            }
            
            else if(el1 ==nums[i]) cnt1++;
            else if(el2 == nums[i]) cnt2++;
            else cnt1--,cnt2--;
            
        }
        int count1=0;
        int count2=0;
        for(int i=0; i<n;i++){
            if(nums[i]==el1) count1++;
            if(nums[i]==el2) count2++;
            
        }
        vector<int> ans;
        if(count1 >n/3)ans.push_back(el1);
        if(count2 >n/3)ans.push_back(el2);
        return ans;
        
    }
};