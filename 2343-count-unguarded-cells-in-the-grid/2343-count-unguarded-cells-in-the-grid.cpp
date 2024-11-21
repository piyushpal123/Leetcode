class Solution {
public:
void visited(int r,int c,vector<vector<int>> &grid){
    int m=grid.size();
    int n=grid[0].size();
    for(int i=r+1;i<m;i++){
       if(grid[i][c]==2||grid[i][c]==1)break;
       grid[i][c]=3;
    }
    for(int i=r-1;i>=0;i--){
       if(grid[i][c]==2||grid[i][c]==1)break;
       grid[i][c]=3;
    }
    for(int i=c+1;i<n;i++){
       if(grid[r][i]==2||grid[r][i]==1)break;
       grid[r][i]=3;
    }
     for(int i=c-1;i>=0;i--){
       if(grid[r][i]==2||grid[r][i]==1)break;
       grid[r][i]=3;
    }
   
}

    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>grid(m,vector<int>(n));
        //G=1,w=2; visited 3;
        for(auto &g:guards){
            int i=g[0],j=g[1];
            grid[i][j]=1;
        }
        
        for(auto&w:walls){
                int i=w[0],j=w[1];
            grid[i][j]=2;
        }

        for(auto &g:guards){
            int r=g[0],c=g[1];
                visited(r,c,grid);
        }

        int res=0;

        for(auto &r:grid){
            for(auto &n:r){
                if(n==0)res++;
            }
        }
        return res;
    }
};