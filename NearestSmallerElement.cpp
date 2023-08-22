vector<int> Solution::prevSmaller(vector<int> &A) {
    int n=A.size();
    stack<int>st;
    vector<int> nums(n);
    
    for(int i=0;i<n;i++){
        if(st.empty()){
            nums[i]=-1;
            st.push(A[i]);
        }
        else{
             while(!st.empty() &&A[i]<=st.top()){
                 st.pop();
             }
             if(st.empty()){
                 nums[i]=-1;
                 st.push(A[i]);
                 
             }
             else{
                 nums[i]=st.top();
                 st.push(A[i]);
             }
        }
       
    }
    return nums;
}
