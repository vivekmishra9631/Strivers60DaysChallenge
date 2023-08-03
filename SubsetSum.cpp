class Solution

{
    
private:
    void subsetSums1(int index,int n,int sum,vector<int>&temp, vector<int>&ans,vector<int>arr){
        if(index==n){
            ans.push_back(sum);
            return;
        }
        
        sum +=arr[index];
        temp.push_back(arr[index]);
        subsetSums1(index+1,n,sum,temp,ans,arr);
        sum -=arr[index];
        temp.pop_back();
        subsetSums1(index+1,n,sum,temp,ans,arr);
        
        
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        vector<int>temp;
        subsetSums1(0,N,0,temp,ans,arr);
        return ans;
        
    }
};
