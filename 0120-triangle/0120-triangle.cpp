class Solution {
public:
int solve(vector<vector<int>>&triangle,int n){
   
       vector<int>front(n,0),curr(n,0);
    // if(i==n-1)return triangle[n-1][j];
    // if(dp[i][j]!=0)return dp[i][j];
    // int d=triangle[i][j]+solve(i+1,j,triangle,dp);
    // int dg=triangle[i][j]+solve(i+1,j+1,triangle,dp);
    
    // return dp[i][j]=min(d,dg);
    for(int j=0;j<n;j++){
       front[j]=triangle[n-1][j];

    }
    for(int i = n-2;i>=0;i--){
       
        for(int j=i;j>=0;j--){
            int d=triangle[i][j]+front[j];

            int dg=triangle[i][j]+front[j+1];
            curr[j]=min(d,dg);
        }
        front =curr;
    }
    return front[0];


}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
     
        
    //    return solve (0,0triangle,dp);
    return solve(triangle,n);
        


         
        
    }
};