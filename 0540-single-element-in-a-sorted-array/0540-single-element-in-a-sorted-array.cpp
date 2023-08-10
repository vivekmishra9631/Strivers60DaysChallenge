class Solution {
//      void binarySearch(vector<int>& nums, int s, int e,int &ans){
//         if(s>e) return ;
//         int mid=s+(e-s)/2;
         
//           if(nums[mid]!=nums[mid+1] &&  nums[mid]!=nums[mid-1]){
//             ans=nums[mid];
            
//         }
        
//         if(nums[mid]==nums[mid-1]){
            
//             binarySearch(nums,s,mid-2,ans);
//             if(mid+1<=e){
//                 binarySearch(nums,mid+1,e,ans);
//             }
            
            
//         }
        
//         if(nums[mid]==nums[mid+1]){
            
//             binarySearch(nums,mid+2,e,ans);
//             if(mid-1>=s){
//                 binarySearch(nums,s,mid-1,ans);
//             }
            
//         }
       
        
        
    
public:
    int singleNonDuplicate(vector<int>& nums) {
    int l=0;
    int h=nums.size()-2;
    while(l<=h){
        int mid=(l+h)>>1;
        if(nums[mid]==nums[mid^1]){
            l=mid+1;
        }
        
        else h=mid-1;
    }
        return nums[l];
        
 
    
        
    }
};