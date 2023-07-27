class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        
        
        while(i<n){
            if(nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
            else i++;
        }
        int a=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=i+1){
                a= nums[i];
                break;
                
            }
           
        }
        if(a==0) return n+1;
        return a;
    }
};