class Solution {
public:
    bool solve(vector<vector<int>>&vv){
        sort(vv.begin(),vv.end());
        vector<vector<int>>res;
        int l=vv.size();
        for(int i=0;i<l;i++){
              int temp=vv[i][1];
              int j=i+1;
              while(j<l && vv[j][0]<temp){
                   temp=max(temp,vv[j][1]);
                   j++;
              }
              res.push_back({vv[i][0],temp});
              i=--j;
        }
         return res.size()>2;
    }
    bool checkValidCuts(int n, vector<vector<int>>& rect) {
        vector<vector<int>>X,Y;
        int m=rect.size();
        for(int i=0;i<m;i++){
            X.push_back({rect[i][0],rect[i][2]});
            Y.push_back({rect[i][1],rect[i][3]});
        }
       return solve(X) || solve(Y);
    }
};