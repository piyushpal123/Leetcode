class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
          int n=grid.size();
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;

      
        
        vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>>pq;
         pq.push({1,{0,0}});
        dist[0][0]=1;
     int a[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int b[8] = {-1, 0, 1, 1, 1, 0, -1, -1};


        while(!pq.empty()){
            int w=pq.top().first;
            int u=pq.top().second.first;
            int v=pq.top().second.second;
            pq.pop();
            for(int i=0;i<8;i++){
                int nu=u+a[i];
                int nv=v+b[i];
                if(0<=nu&&nu<n&&0<=nv&&nv<n){
            if((grid[nu][nv]==0) && (w+1<dist[nu][nv])){
                pq.push({w+1,{nu,nv}});
                dist[nu][nv]=w+1;
            }
                }

            }
            

            
        }
        if(dist[n-1][n-1]!=INT_MAX)return dist[n-1][n-1];
        return -1;
    }
};