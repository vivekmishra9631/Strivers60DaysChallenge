class Solution {
    
public:
    
    void solve(int ind,string s,vector<string>&temp,vector<vector<string>> &ans){
        if(ind==s.size()){
            ans.push_back(temp);
            return;
        } 
        for(int i=ind;i<s.size();++i){
            if(isPalindrome(s,ind,i)){
                temp.push_back(s.substr(ind, i - ind + 1));
                solve(i+1,s,temp,ans);
                temp.pop_back();
            }
        }
    }
    
    bool isPalindrome(string str, int i, int j){
        if(i>j) return 1;
        if(str[i]!=str[j]) return 0;
        
        return isPalindrome(str,i+1,j-1);
        
    }
public:
    vector<vector<string>> partition(string s){
        vector<vector<string>> ans;
        vector<string>temp;
        solve(0,s,temp,ans);
        return ans;
    }

};