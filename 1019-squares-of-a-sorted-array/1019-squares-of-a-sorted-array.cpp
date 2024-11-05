class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //dumb way
    //    for(int i=0;i<nums.size();i++){
    //     nums[i]=nums[i]*nums[i];
    //    }
    //    sort(nums.begin(),nums.end());
    //    return nums;
        vector<int>ans(nums.size(),0);
        int l=0,r=nums.size()-1;
        int val;int i=nums.size()-1;
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
             val=nums[l];
                l++;

            }
            else{
                val=nums[r];
                r--;
            }
            
            ans[i]=val*val;
            i--;
        }
        return ans;
    }
};