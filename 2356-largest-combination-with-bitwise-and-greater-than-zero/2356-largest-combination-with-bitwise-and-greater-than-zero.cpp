class Solution {
public:
    int largestCombination(vector<int>& cand) {
       
        int n=cand.size();
         map<int,int>mp;
         for(int i=0;i<n;i++){
            int num=cand[i];
            int id=1;
            while(num){
                if(num%2!=0){
                    mp[id]++;
                }
                id++;
                num/=2;
            }
         }
         int res=0;
         for(auto i:mp){
            res=max(res,i.second);
         }
         return res;
       
        
    }
};