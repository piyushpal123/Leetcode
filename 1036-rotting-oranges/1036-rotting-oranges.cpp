class Solution {
public:
   
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){q.push({{i,j},0});
                visited[i][j]=2;}

            }
        }
        
        int time=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
       
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            time=max(time,t);
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                if(nrow>=0 && nrow<m&& ncol>=0&&ncol<n && visited[nrow][ncol]!=2&& grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},time+1});
                    visited[nrow][ncol]=2;
                }
            }

        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]!=2&&grid[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
    }
};