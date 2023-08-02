#include<bits/stdc++.h>
using namespace std;
int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr, arr + n);
    	sort(dep, dep + n);
    	 int ans=1; //final value
    for(int i=0;i<=n-1;i++)
    {
        int count=1; 
        for(int j=i+1;j<=n-1;j++)
        {
            if((arr[i]>=arr[j] && arr[i]<=dep[j]) ||
           (arr[j]>=arr[i] && arr[j]<=dep[i]))
           {
               count++;
           }
        }
        ans=max(ans,count); 
    }
    return ans;
    }
int main(){
    int arr[]={900,945,955,1100,1500,1800};
    int dep[]={920,1200,1130,1150,1900,2000};
    int n=sizeof(dep)/sizeof(dep[0]);
    cout<<"Minimum number of Platforms required "<<findPlatform(arr,dep,n)<<endl;
return 0;
}