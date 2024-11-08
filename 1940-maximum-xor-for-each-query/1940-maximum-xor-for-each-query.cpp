class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
      
      vector<int>pre(n);
      pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]^nums[i];
        }
    vector<int>ans;
    int k=(1<<maximumBit)-1;
    for(int i=n-1;i>=0;--i){
        ans.push_back(pre[i]^k);

    }
return ans;
    }
};