class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {

        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        vector<int>ans(n,0);
        int a=0;
        for(int i=0;i<n;i++){
            if(nums[i])ans[a++]=nums[i];
        }
return ans;
        
    }
};