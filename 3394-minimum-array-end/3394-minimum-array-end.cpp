class Solution {
public:
    long long minEnd(int n, int x) {
        if(n==1)return x;
        long long  ans=x;
     for (int i=0;i<n-1;i++){
            ans=(ans+1)|x;
          
         
            
        }
        return ans;
        
    }
};