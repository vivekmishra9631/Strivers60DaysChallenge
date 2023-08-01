class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n= nums.size();
        int count=0;
        int i=0;
        while(i<n-count-1){
            if(nums[i]!=nums[i+1]){
                i++;
                 continue;
            }
            else{
                
                for(int j=i+1;j<n-count-1;j++){
                    swap(nums[j+1],nums[j]);
                }
                count++;
            }
            
        }
        
        return n-count;
    }
};