class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
         int n=box.size();
        int m=box[0].size();
        for(int i=0;i<n;i++){
            int b=m-1;
           for(int j=m-1;j>=0;j--){
            if(box[i][j]=='*')b=j-1;
            if(box[i][j]=='#'){
                box[i][j] = '.';
                    box[i][b] = '#';
                    b-=1;
            }
           }
        }
        vector<vector<char>> boxx(m,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=m-1;j>=0;j--){
                boxx[j][n-i-1]=box[i][j];
            }
        }
        return boxx;
        
        
    }
};