class Solution {
    #define pip pair<int,pair<int,int>>
public:
bool isvalid(int &x,int &y,int m,int n){
    return(x>=0&&x<m&&y>=0&&y<n);
}
    int minCost(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n));
        priority_queue<pip,vector<pip>,greater<pip>>pq;
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
       

        pq.push({0,{0,0}});
       

        while(!pq.empty()){

            auto it=pq.top();
            pq.pop();
            int x=it.second.first;
            int y=it.second.second;
            int cost=it.first;
            if(vis[x][y])continue;
                 vis[x][y]=true;
            if(x==m-1&&y==n-1)return cost;
            

            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(isvalid(nx,ny,m,n)&&!vis[nx][ny]){
                    int ncost=cost;
                    ncost+=(i+1)==grid[x][y]?0:1;
                    pq.push({ncost,{nx,ny}});
                }
            }



        }
        return 0;
        
    }
};