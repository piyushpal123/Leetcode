class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int a=0;
        for(int i=0;i<n;i++ ){
            if(!(nums[i]&1)){ans[a]=0;
            a++;}
        }


        return ans;
    }
};