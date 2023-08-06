class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        
        int n= nums.size();
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
            }
        int longest=0;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt+=1;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
        
        
    }
};