class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
      long long tsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            tsum+=nums[i];
        }
      long long prefix_sum=0;
        int cnt=0;
        for(int i=0;i<n-1;i++){
        prefix_sum+=nums[i];
         if(2*prefix_sum>=tsum)cnt++;
          

        }
        return cnt;
    }
};