class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        
         int n = nums.size();
        unordered_map<int,int>mp;
        int res = 0;
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < i ; ++j){
                int p=nums[i]*nums[j];
                res += 8 * mp[p];
                mp[p]++;
            }
        }
        return res;
    }
};