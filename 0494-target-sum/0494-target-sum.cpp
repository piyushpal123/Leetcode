class Solution {
public:
    int helper(vector<int>& nums, int target, long long sum,int idx,map<pair<int,int>,int>&dp){
        if(idx==nums.size()){
            if(sum==target){
               return dp[{idx,sum}]=1;
            }
                return dp[{idx,sum}]=0;
        }
       if(dp.find({idx,sum})!=dp.end()) return dp[{idx,sum}];
       int plus = helper(nums,target,sum+nums[idx],idx+1,dp);
       int minus = helper(nums,target,sum-nums[idx],idx+1,dp);
       return dp[{idx,sum}]=plus+minus;
      
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        long long sum=0;
        int idx=0;
        map<pair<int,int>,int>dp;
        return helper(nums,target,sum,idx,dp);
    }
};