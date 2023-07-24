class Solution {
    
private:
    vector<int> generateRow(int row){
        long long ans=1;
        vector<int> temp;
        temp.push_back(ans);
        
        for(int col=1;col<row; col++){
            ans*=(row-col);
            ans/=col;
            temp.push_back(ans);
        }
        return temp;
        
    }
    
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        for(int i=1; i<=numRows ; i++){
            
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};