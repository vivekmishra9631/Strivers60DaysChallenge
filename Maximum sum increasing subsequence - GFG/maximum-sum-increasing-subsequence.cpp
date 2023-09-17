//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	
	int solve(int ind,int prev_ind,int n,int nums[],vector<vector<int>>&dp){
        if(ind==n) return 0;
        if(dp[ind][prev_ind+1]!=-1) return dp[ind][prev_ind+1];
        int len=solve(ind+1,prev_ind,n,nums,dp);
        if(prev_ind==-1 || nums[ind]>nums[prev_ind]){
            len=max(len,nums[ind]+solve(ind+1,ind,n,nums,dp));
        }
        return dp[ind][prev_ind+1]=len;
    }
    
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<vector<int>>dp(n,vector<int>(n+1,-1));
	    return solve(0,-1,n,arr,dp);
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends