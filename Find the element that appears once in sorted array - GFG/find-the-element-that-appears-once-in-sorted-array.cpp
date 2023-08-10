//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
     void binarySearch(int nums[], int s, int e,int &ans){
        if(s>e) return ;
        int mid=s+(e-s)/2;
          if(nums[mid]!=nums[mid+1] &&  nums[mid]!=nums[mid-1]){
            ans=nums[mid];
            
        }
        
        if(nums[mid]==nums[mid-1]){
            
            binarySearch(nums,s,mid-2,ans);
            if(mid+1<=e){
                binarySearch(nums,mid+1,e,ans);
            }
            
            
        }
        
        if(nums[mid]==nums[mid+1]){
            
            binarySearch(nums,mid+2,e,ans);
            if(mid-1>=s){
                binarySearch(nums,s,mid-1,ans);
            }
            
    }
     }
  
    int findOnce(int arr[], int n)
    {
        //code here.
        int ans=-1;
        int s=0;
        int e=n-1;
        binarySearch(arr,s,e,ans);
        return ans;
        
        
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
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends