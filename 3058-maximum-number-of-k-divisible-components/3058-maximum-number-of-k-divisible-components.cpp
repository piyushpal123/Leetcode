class Solution {
public:

    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        unordered_map<int,vector<int>>adj;
        for( const auto &edge:edges){
            adj[edge[0]].push_back(edge[1]);
                        adj[edge[1]].push_back(edge[0]);

        }
        int res=0;
        function<long long(int,int)>dfs=[&](int curr,int parent){
            long long total=values[curr];
            for(int child:adj[curr]){
                if(child!=parent){
                    total+=dfs(child,curr);
                }
            }
        if(total%k==0){
            res++;
            return 0LL;}
            return total;
        };
    dfs(0,-1);
    return res;
        
    }
};