class Solution {
public:
void dfs(int node,vector<int>&visited, vector<vector<int>>&adj){
    visited[node]=true;
    for(int neighbor:adj[node]){
        if(!visited[neighbor])dfs(neighbor,visited,adj);
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
       
        int r=isConnected.size();
        int c=isConnected[0].size();
        vector<vector<int>>adj(r);

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(isConnected[i][j]==1&& i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }

            }
        }
        int cnt=0;
        
     vector<int>visited(r,0);
       for(int i=0;i<r;i++){
        if(!visited[i]){
        cnt++;
        dfs(i,visited,adj);}
       
       }
        return cnt;
    }
};