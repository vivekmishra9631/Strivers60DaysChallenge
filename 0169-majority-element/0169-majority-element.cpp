class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(count==0){
                ele=nums[i];
                count=1;
            }
            else if(ele != nums[i])
                count--;
            
            else if(ele ==nums[i]) count++;
        
        }
    
        int cnt1 = 0;
        for(int i =0; i < n; i++) {
            if (nums[i] == ele) cnt1++;
    }
    
    if(cnt1 >nums.size()/2) return ele;
    return -1;
    }
};