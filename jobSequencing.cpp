#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<vector<int>>v(n);
        priority_queue<int>pq;
        vector<int>ans(2,0);
        for(int i =0;i<n;i++)
        {
            v[arr[i].dead-1].push_back(arr[i].profit);
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<v[i].size();j++)
            {
                pq.push(v[i][j]);
            }
            if(!pq.empty())
            {
                ans[0]++;
                ans[1] += pq.top();
                pq.pop();
            }
        }
        return ans;
    };
int main(){
    
return 0;
}