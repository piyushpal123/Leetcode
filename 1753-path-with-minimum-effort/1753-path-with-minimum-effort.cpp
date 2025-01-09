class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {

        int n=heights.size();
        int m=heights[0].size();

        int row[4]={0,0,1,-1};
        int col[4]={1,-1,0,0};


        

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int, pair<int, int>>>>q;


vector<vector<int>>dist(n,vector<int>(m,1e9));
        
        dist[0][0]=0;

        //abs,row ,col;
        q.push({0,{0,0}});

        while(!q.empty()){

      
        int w=q.top().first;
         int r=q.top().second.first;
        int c=q.top().second.second;
  q.pop();

            if(r==n-1&&c==m-1)return w;

        for(int i=0;i<4;i++){

            int nr=r+row[i];
            int nc=c+col[i];
 

            
            if(nc>=0 && nr>=0 && nc<m && nr<n ){
            int nw=max(abs(heights[nr][nc]-heights[r][c]),w);
              if(nw<dist[nr][nc]){
                dist[nr][nc]=nw;
                q.push({nw,{nr,nc}});
              }

            }

        }
        
        }

       return 0;
        
    }
};