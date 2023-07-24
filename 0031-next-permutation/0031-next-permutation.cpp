class Solution {
    
private:
    int nextSmallest(vector<int>& nums , int i){
        int n = nums.size();
        int mini = nums[i+1];
        int index=-1;
        
        if(mini>nums[i]) index=i+1;
        
        for(int j=i+2; j<n; j++){
            if(nums[j]<mini && nums[j]> nums[i]){
                mini = nums[j];
                index=j;
            }
          
        }
        return index;
    } 
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        bool flag= false;
        for(i ; i>=0; i--){
            int j = nextSmallest(nums,i);
            if (j!=-1){
                swap(nums[i],nums[j]);
                flag=true;
                break;  
            } 
        }
        if(i==0 && flag== false){
            sort(nums.begin(), nums.end());
        }
        
        else sort(nums.begin()+i+1, nums.end());
    }
};