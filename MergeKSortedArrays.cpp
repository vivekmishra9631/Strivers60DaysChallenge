class Solution
{
    public:
    //Function to merge k sorted arrays.
    public:
    typedef pair<int,pair<int,int>> triplet;
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        priority_queue<triplet, vector<triplet>, greater<triplet> > pq;
        for(int i=0;i<k;i++){
            pq.push({arr[i][0],{i,0}});
        }
        
        vector<int> ans;
        while(!pq.empty()){
            auto curr=pq.top();
            pq.pop();
            ans.push_back(curr.first);
            int r=curr.second.first;
            int c=curr.second.second;
            if(c+1 <k){
               pq.push({arr[r][c+1],{r,c+1}}); 
            }
        }
        return ans;
    }
};
