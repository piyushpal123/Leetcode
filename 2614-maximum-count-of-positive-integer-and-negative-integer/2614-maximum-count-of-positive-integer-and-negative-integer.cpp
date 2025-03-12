class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int ncnt=0,pcnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0)ncnt++;
            if(nums[i]>0)pcnt++;
        }
        return max(ncnt,pcnt);
        
    }
};