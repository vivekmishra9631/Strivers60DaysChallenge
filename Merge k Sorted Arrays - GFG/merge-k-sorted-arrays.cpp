//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++


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

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends