class Solution {
    
public:
void solve(vector<int>&nums, int &multiplier){
        int mini=INT_MAX;
        int indi;
        for(int i=0;i<nums.size();i++){
        if(nums[i]<mini){ indi=i;
        mini=nums[i];}
           
        }
        nums[indi]=mini*multiplier;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
       
       for(int i=0;i<k;i++){
        
        solve(nums,multiplier);
       }
       return nums;
        
    }
};