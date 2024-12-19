class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int>visit(arr.size(),0);
        int ans=0;
        for(int i=0;i<arr.size();i++){
            visit[arr[i]]=1;
            int sum=accumulate(visit.begin(),visit.begin()+i+1,0);
            if(sum==i+1){
                ans++;
            }
        }
        return ans;
    }
};