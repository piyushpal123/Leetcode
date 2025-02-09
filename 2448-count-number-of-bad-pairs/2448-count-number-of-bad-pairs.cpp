class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n=nums.size();
      unordered_map<int,long long>mpp;
      long long total_pairs=(n*(n-1))/2;
      long long gpairs=0;

        for(int i=0;i<n;i++){
            int el=i-nums[i];
            if(mpp.find(el)!=mpp.end())gpairs+=mpp[el];

            
                mpp[el]++;
            
          
        }
        return total_pairs-gpairs;
        
    }
};