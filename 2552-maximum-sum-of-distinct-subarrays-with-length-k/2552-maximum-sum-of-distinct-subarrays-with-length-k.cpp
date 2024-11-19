class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        long long sum=0;
        int l=0;
        unordered_map<int,int>count;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            count[nums[i]]+=1;

            if(i-l+1>k){
                count[nums[l]]-=1;
                if(count[nums[l]]==0)count.erase(nums[l]);
               sum-=nums[l];
               l+=1;
            }
            if(i-l+1==k && count.size()==k){
                ans=max(ans,sum);
            }

        }
        return ans;
        
    }
};