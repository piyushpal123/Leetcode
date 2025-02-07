class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
         unordered_map<int,int>color;
        unordered_map<int,int>ball;
        int n=queries.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            int b = queries[i][0];
            int c = queries[i][1];
            if(ball.count(b)){
                int cc=ball[b];
                color[cc]--;
                if(color[cc]==0)color.erase(cc);
            } 
            ball[b]=c;
            color[c]++;
            res[i]=color.size();
        }
        return res;
        
    }
};