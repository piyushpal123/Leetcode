class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int cnteven=0;
       int mini=INT_MAX;
        long long sum=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
               
                    mini=min(mini,abs(matrix[i][j]));

                
                sum+=abs(matrix[i][j]);
                 if(matrix[i][j]<0){
                    cnteven++;}
            }
        }
        if(cnteven%2!=0)return sum-2*mini;
        return sum;
        
    }
};