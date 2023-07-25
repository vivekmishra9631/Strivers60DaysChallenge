class Solution {
    private:
    void swap(int& a,int& b){
        int temp=a;
        a=b;
        b=temp;
        
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        
        for(int j=0;j<n;j++){
            int i=0;
            while(i<n/2){
                swap(matrix[i][j],matrix[n-1-i][j]);
                i++;
            }
        }
        
        int total=n*n;
        int count=0;
             
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};