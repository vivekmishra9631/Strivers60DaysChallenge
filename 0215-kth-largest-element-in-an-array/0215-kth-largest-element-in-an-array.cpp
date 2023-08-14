class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>minHeap;
        int i=0;
        while(i<nums.size()){
            if(minHeap.size()<=k){
                minHeap.push(nums[i]);
                i++;
            }
            
            else{
                minHeap.pop();
            }
        }
        if(minHeap.size()>k){
                minHeap.pop();
            }
        return minHeap.top();
    }
};