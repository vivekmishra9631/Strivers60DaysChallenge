class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int start= intervals[0][0];
        int end= intervals[0][1];
        vector<vector<int>> ans;
        bool flag=true;
        
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=end){
                if(i==n-1) flag=false;
                end= max(end, intervals[i][1]);
                start= min(start, intervals[i][0] );
            }
            
           
            
            else {
                if(i==n-1) flag=false;
                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);
                ans.push_back(temp);
                
                start= intervals[i][0];
                end= intervals[i][1];
            }
        }
        if(flag==false || n==1){
            vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);
                ans.push_back(temp);
        }
        
        return ans;
        
    }
};