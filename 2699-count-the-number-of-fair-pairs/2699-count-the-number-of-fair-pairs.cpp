class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
         int n=nums.size();
         long long ans=0;
         sort(nums.begin(),nums.end());
         vector<int>v=nums;
         for(int i=0;i<n;i++){
            int l=lower-nums[i];
            int h=upper-nums[i];
            v.erase(v.begin());
            auto left=lower_bound(v.begin(),v.end(),l);
            auto right=upper_bound(v.begin(),v.end(),h);
            ans+=(right-left);
         }
         return ans;
    }
    
};