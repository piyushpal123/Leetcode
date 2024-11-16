class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
         
        int n=nums.size();
        vector<int>trial(n,0);
        vector<int>result;
        for(int i=1;i<n;i++){
            if(nums[i-1]+1!=nums[i])trial[i]++;
        }
        int count=0;
        for(int i=0;i<k;i++){
            count+=trial[i];
        }
        if(count>=1) result.push_back(-1);
            else result.push_back(nums[k-1]);
        for(int i=k;i<n;i++){
            
            if(trial[i-k+1]==1)count--;
            if(trial[i]==1) count++;
            if(count>=1) result.push_back(-1);
            else result.push_back(nums[i]);
            }
        return result;
        
    }
};