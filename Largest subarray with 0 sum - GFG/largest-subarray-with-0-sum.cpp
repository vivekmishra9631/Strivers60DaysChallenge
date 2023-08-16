//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        
        long long sum=0;
        int maxLen=0;
            
        map<long long,int> preSumMap;
        for(int i=0; i<n; i++){
            sum+=A[i];
            if(sum==0){
                maxLen= max(maxLen ,i+1);
            }
            
            long long rem= sum;
            
            if(preSumMap.find(rem) != preSumMap.end()){
                
                maxLen= max(maxLen,i-preSumMap[rem]);
                
            }
            
            if(preSumMap.find(rem) == preSumMap.end()){
                preSumMap[rem]= i;
            }
            
           
        }
        return maxLen;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends