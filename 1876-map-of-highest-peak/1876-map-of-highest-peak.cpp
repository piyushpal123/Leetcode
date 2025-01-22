class Solution {
public:
bool isvalid(int &x,int &y,int &m,int &n){
    return(x>=0&&x<m&&y>=0&&y<n);
}
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m=isWater.size();
        int n=isWater[0].size();
        
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        queue<pair<int,int>>q;
        vector<vector<int>>height(m,vector<int>(n,0));


        int dis[5]={-1,0,1,0,-1};

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(isWater[i][j]==1){q.push({i,j});
                vis[i][j]=true;}
            }
        }
        int level=0;

        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
         auto node=q.front();
         int ni=node.first;
         int nj=node.second;
         q.pop();
            for(int j=0;j<4;j++){
                int nx=ni+dis[j];
                int ny=nj+dis[j+1];
               
                if(isvalid(nx,ny,m,n)&&!vis[nx][ny]){
                    q.push({nx,ny});
                    height[nx][ny]=1+level;
                    vis[nx][ny]=true;
                }
            }
        } level++;}
        
      return height; 
    }
};