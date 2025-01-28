class Solution {
public:
    #define  vi vector<vector<bool>>
    #define  v vector<vector<int>>

int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
bool check(int &r,int &c,int &m ,int &n){
    return(r>=0&&r<m &&c>=0&&c<n);
}

void dfs(int i,int j,v &grid,vi &vis ,int &sum){
    int m=grid.size();
    int n=grid[0].size();
    vis[i][j]=true;
    sum+=grid[i][j];
    for(int k=0;k<4;k++){
        int r=i+dx[k];
        int c=j+dy[k];
        if(check(r,c,m,n)&&(!vis[r][c])&&grid[r][c]>0){
         
            dfs(r,c,grid,vis,sum);
        }
    }
}
    int findMaxFish(vector<vector<int>>& grid) {
     int m=grid.size();
    int n=grid[0].size();
        vi vis(m,vector<bool>(n,false));
        int ans=0;
        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){
                int sum=0;
                if(grid[i][j]>0){
                  dfs(i,j,grid,vis,sum);
                  ans=max(ans,sum);}
            }
        }
     
        return ans;
    }
};