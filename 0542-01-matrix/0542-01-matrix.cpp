class Solution {
public:
bool check(int m,int n,int i,int j){
  return (i >= 0 && i < m && j >= 0 && j < n);
}
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat)
     {
        int y[4]={1,-1,0,0};
        int x[4]={0,0,1,-1};
        int m=mat.size();
        int n=mat[0].size();

        vector<vector<int>>visited(m,vector<int>(n,0));
     vector<vector<int>>mindis(m,vector<int>(n,0));
     queue<pair<pair<int,int>,int>>q;

     // separate where zero is lie
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(!mat[i][j]){q.push({{i,j},0});
                      visited[i][j] = 1; }
                    
                }
            }


        while(!q.empty()){
            auto el=q.front();
            q.pop();
            int i=el.first.first;
            int j=el.first.second;
            int dis=el.second;

           
            mindis[i][j]=dis;

            for(int k=0;k<4;k++){
                int ni=x[k]+i;
                int nj=y[k]+j;

                if(check(m,n,ni,nj)&&visited[ni][nj]!=1){
                        visited[ni][nj] = 1; 
                    q.push({{ni,nj},dis+1});
                  
                }

        }
        }
     
         return mindis;
     
        
        
    }
};