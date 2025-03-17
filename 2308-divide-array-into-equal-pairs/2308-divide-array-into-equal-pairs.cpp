class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
      unordered_map<int,int>freq;
      for(auto c:nums){
        freq[c]++;
      }
      for(auto it:freq){
        if(it.second%2!=0)return false;
      }
      return true;
        
    }
};