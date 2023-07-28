class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        int col= matrix[0].size();
        int startInd=0;
        int endInd=row*col-1;
        int midInd= (startInd+endInd)/2;
        
        while(startInd <= endInd){
            if(matrix[midInd/col][midInd%col]==target) return true;
            
            else if(matrix[midInd/col][midInd%col]> target){
                endInd=midInd-1;
            }
            
            else {
                startInd=midInd+1;
            }
            midInd= (startInd+endInd)/2;
        }
       return false; 
    }
};