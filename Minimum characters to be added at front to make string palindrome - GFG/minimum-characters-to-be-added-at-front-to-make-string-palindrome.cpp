//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

    
    int minChar(string str){
        //Write your code here
        string rev="";
        int n=str.length();
        
        for(int i=n-1;i>=0;i--){
            rev+=str[i];
        }
        
        string new_str=str+"$"+rev;
        
        vector<int> z(new_str.size(), 0);
        for(int i=1; i< new_str.size(); i++){
            int j=z[i-1];
            
            while(j>0 && new_str[i] !=new_str[j]){
                j= z[j-1];
            }
             z[i] = (j += new_str[i] == new_str[j]);
        }
        return str.size()-z[new_str.size()-1];
        
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends