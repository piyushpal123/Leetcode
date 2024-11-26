class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>incoming(n,0);
        for(auto &i:edges){
            int u=i[0];
            int v=i[1];
            incoming[v]++;
        }
        vector<int>champion;
        for(int i=0;i<n;i++){
            if(incoming[i]==0)champion.push_back(i);
        }
        if(champion.size()>1)return -1;
        return champion[0];
        
    }
};