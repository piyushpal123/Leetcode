class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi_cnt=1,mini_cnt=1,maxi=1,mini=1;
        int n=nums.size();
        if(n==1)return n;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){maxi_cnt++; maxi=max(maxi,maxi_cnt);}
             else{
                maxi_cnt=1;
                
            }
            if(nums[i]<nums[i-1]){mini_cnt++; mini=max(mini,mini_cnt);}
            else{
                
                mini_cnt=1;
            }
        }
        return max(maxi,mini);
        
    }
};