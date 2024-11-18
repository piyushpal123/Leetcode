class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
          int n=code.size();
        for(int i=0;i<n;i++){
            code.push_back(code[i]);
        }
        for(int i=0;i<n;i++){
            code.push_back(code[i]);
        }
        vector<int>ans(n,0);
        if(k==0) return ans;
        
        for(int i=n;i<2*n;i++){
            if(k>0){
            for(int j=i+1;j<=i+k;j++){
                    ans[i-n]+=code[j];
            }
            }
            else{
               for(int j=i-1;j>=i+k;j--){
                    ans[i-n]+=code[j];
            }  
            }
        }
        return ans;
    }
};