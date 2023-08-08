class Solution {
public:
    string reverseWords(string s) {
        vector<string>arr;
        string temp="";
        int n=s.length();
        for(int i=0;i<n;i++){
            
            if(s[i]!=' '){
                temp.push_back(s[i]);
            }
            
            else if(s[i]==' '){
                if(temp.length()!=0) arr.push_back(temp);
                temp="";
                }
                
            }
        
        if(temp.length()!=0) arr.push_back(temp);
            
        
        reverse(arr.begin(),arr.end());
        string ans="";
        for(int i=0; i<arr.size()-1; i++){
            ans+=arr[i];
            ans+=" ";
        }
        ans+=arr[arr.size()-1];
        return ans;
    }
};