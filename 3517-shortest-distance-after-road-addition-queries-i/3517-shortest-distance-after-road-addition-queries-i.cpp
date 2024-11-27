class Solution {
public:
int bfs(int n,vector<vector<int>>&adj){
   
    queue<int>q;
     vector<bool>visited(n,false);
 
    int len=0;
    visited[0]=true;
       q.push(0);
    while(q.size()!=0){
        
     int m=q.size();
     while(m--){
       
int curr=q.front();
 q.pop();
        if(curr==n-1)return len;

        for(auto it:adj[curr]){
            if(!visited[it]){
                q.push(it);
                visited[it]=true;
            }
        }}
        len++;
    }
    return len;
}
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
       vector<vector<int>>adj(n);
     
       for(int i=0;i<n-1;i++){
        adj[i].push_back(i+1);
       } 

       vector<int>ans;
       for(auto & i:queries){
        int u=i[0];
        int v=i[1];
        adj[u].push_back(v);
        
       
       
  
      ans.push_back( bfs(n,adj)) ;}
       
return ans;
    }
};